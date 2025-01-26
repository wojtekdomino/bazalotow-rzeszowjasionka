#include "database.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>

/**
 * @brief Konstruktor klasy Database.
 * Tworzy pustą bazę lotów.
 */
Database::Database() {}

/**
 * @brief Wczytuje dane lotów z pliku JSON i zapisuje je w bazie.
 * @param filename Nazwa pliku JSON do odczytu.
 * @return true, jeśli plik został poprawnie załadowany; false w przeciwnym razie.
 */
bool Database::loadFromJson(const QString& filename) {
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie udało się otworzyć pliku:" << filename;
        return false;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Niepoprawny format pliku JSON";
        return false;
    }

    QJsonArray array = doc.array();
    flights.clear(); // Usuwamy poprzednie loty, aby załadować nowe dane

    for (const QJsonValue& value : array) {
        if (value.isObject()) {
            QJsonObject obj = value.toObject();
            Flight flight;
            flight.flightNumber = obj["flightNumber"].toString();
            flight.departure = obj["departure"].toString();
            flight.arrival = obj["arrival"].toString();
            flight.time = obj["time"].toString();
            flight.carrier = obj["carrier"].toString();
            flight.flightCode = obj["flightCode"].toString();
            flight.aircraftType = obj["aircraftType"].toString();

            // Wczytywanie dni tygodnia
            QJsonArray daysArray = obj["daysOfWeek"].toArray();
            for (const QJsonValue& day : daysArray) {
                flight.daysOfWeek.append(day.toInt());
            }

            flights.append(flight);
        }
    }

    return true;
}

/**
 * @brief Dodaje nowy lot do bazy danych.
 * @param flight Obiekt Flight zawierający dane lotu.
 * @return true, jeśli lot został dodany; false, jeśli lot o danym numerze już istnieje.
 */
bool Database::addFlight(const Flight& flight) {
    for (const Flight& existingFlight : flights) {
        if (existingFlight.flightNumber == flight.flightNumber) {
            return false; // Lot już istnieje, nie można dodać duplikatu
        }
    }
    flights.append(flight);
    return true;
}

/**
 * @brief Usuwa lot z bazy danych na podstawie numeru lotu.
 * @param flightNumber Numer lotu do usunięcia.
 * @return true, jeśli lot został usunięty; false, jeśli lot nie istnieje.
 */
bool Database::deleteFlight(const QString& flightNumber) {
    for (int i = 0; i < flights.size(); ++i) {
        if (flights[i].flightNumber == flightNumber) {
            flights.remove(i); // Usunięcie lotu z listy
            return true;
        }
    }
    return false; // Lot o podanym numerze nie istnieje
}

/**
 * @brief Zwraca listę wszystkich lotów w bazie.
 * @return Wektor obiektów Flight.
 */
QVector<Flight> Database::getFlights() {
    return flights;
}
