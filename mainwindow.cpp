#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidgetItem>
#include <QDebug>

/**
 * @brief Konstruktor klasy MainWindow.
 * Inicjalizuje interfejs użytkownika i wczytuje loty z pliku JSON.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db.loadFromJson("flights.json");
    loadFlights();
}

/**
 * @brief Destruktor klasy MainWindow.
 * Usuwa obiekt interfejsu użytkownika.
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief Wczytuje loty z bazy i wyświetla je w tabeli interfejsu.
 */
void MainWindow::loadFlights() {
    ui->tableFlights->setRowCount(0);
    QVector<Flight> flights = db.getFlights();

    for (int i = 0; i < flights.size(); ++i) {
        ui->tableFlights->insertRow(i);
        ui->tableFlights->setItem(i, 0, new QTableWidgetItem(flights[i].flightNumber));
        ui->tableFlights->setItem(i, 1, new QTableWidgetItem(flights[i].departure));
        ui->tableFlights->setItem(i, 2, new QTableWidgetItem(flights[i].arrival));
        ui->tableFlights->setItem(i, 3, new QTableWidgetItem(flights[i].time));
        ui->tableFlights->setItem(i, 4, new QTableWidgetItem(flights[i].carrier));
        ui->tableFlights->setItem(i, 5, new QTableWidgetItem(flights[i].flightCode));
        ui->tableFlights->setItem(i, 6, new QTableWidgetItem(flights[i].aircraftType));
    }
}

/**
 * @brief Pobiera zaznaczone dni tygodnia do filtrowania lotów.
 * @return Wektor liczb reprezentujących dni tygodnia (1 = poniedziałek, ..., 7 = niedziela).
 */
QVector<int> MainWindow::getSelectedDays() {
    QVector<int> selectedDays;
    if (ui->checkMonday->isChecked()) selectedDays.append(1);
    if (ui->checkTuesday->isChecked()) selectedDays.append(2);
    if (ui->checkWednesday->isChecked()) selectedDays.append(3);
    if (ui->checkThursday->isChecked()) selectedDays.append(4);
    if (ui->checkFriday->isChecked()) selectedDays.append(5);
    if (ui->checkSaturday->isChecked()) selectedDays.append(6);
    if (ui->checkSunday->isChecked()) selectedDays.append(7);
    return selectedDays;
}

/**
 * @brief Obsługuje filtrowanie lotów według zaznaczonych dni tygodnia.
 */
void MainWindow::on_btnFilter_clicked() {
    QVector<int> selectedDays = getSelectedDays();
    QVector<Flight> flights = db.getFlights();

    ui->tableFlights->setRowCount(0);

    // Automatyczne dopasowanie szerokości kolumn
    ui->tableFlights->resizeColumnsToContents();
    ui->tableFlights->horizontalHeader()->setStretchLastSection(true);

    for (const Flight& flight : flights) {
        bool matches = false;
        for (int day : flight.daysOfWeek) {
            if (selectedDays.contains(day)) {
                matches = true;
                break;
            }
        }
        if (matches) {
            int row = ui->tableFlights->rowCount();
            ui->tableFlights->insertRow(row);
            ui->tableFlights->setItem(row, 0, new QTableWidgetItem(flight.flightNumber));
            ui->tableFlights->setItem(row, 1, new QTableWidgetItem(flight.departure));
            ui->tableFlights->setItem(row, 2, new QTableWidgetItem(flight.arrival));
            ui->tableFlights->setItem(row, 3, new QTableWidgetItem(flight.time));
            ui->tableFlights->setItem(row, 4, new QTableWidgetItem(flight.carrier));
            ui->tableFlights->setItem(row, 5, new QTableWidgetItem(flight.flightCode));
            ui->tableFlights->setItem(row, 6, new QTableWidgetItem(flight.aircraftType));
        }
    }
}

/**
 * @brief Obsługuje dodawanie nowego lotu do bazy danych.
 * Pobiera dane z pól formularza i dodaje lot do listy.
 */
void MainWindow::on_btnAddFlight_clicked() {
    Flight flight;
    flight.flightNumber = ui->inputFlightNumber->text();
    flight.departure = ui->inputDeparture->text();
    flight.arrival = ui->inputArrival->text();
    flight.time = ui->inputTime->text();
    flight.carrier = ui->inputCarrier->text();
    flight.flightCode = ui->inputFlightCode->text();
    flight.aircraftType = ui->inputAircraftType->text();

    if (db.addFlight(flight)) {
        loadFlights(); // Odświeżenie tabeli po dodaniu nowego lotu
    } else {
        qDebug() << "Błąd: Lot o podanym numerze już istnieje.";
    }
}

/**
 * @brief Obsługuje usuwanie lotu z bazy danych.
 * Usuwa zaznaczony lot z tabeli i bazy danych.
 */
void MainWindow::on_btnDeleteFlight_clicked() {
    int row = ui->tableFlights->currentRow();
    if (row >= 0) {
        QString flightNumber = ui->tableFlights->item(row, 0)->text();
        if (db.deleteFlight(flightNumber)) {
            ui->tableFlights->removeRow(row); // Aktualizacja tabeli po usunięciu
        } else {
            qDebug() << "Błąd: Nie udało się usunąć lotu.";
        }
    } else {
        qDebug() << "Nie wybrano lotu do usunięcia.";
    }
}
