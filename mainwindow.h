#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * Klasa MainWindow obsługuje interfejs użytkownika aplikacji.
 * Umożliwia dodawanie, usuwanie i filtrowanie lotów, a także
 * wyświetlanie ich w tabeli.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    /**
     * Konstruktor klasy MainWindow.
     * @param parent Wskaźnik na nadrzędny widget (domyślnie nullptr).
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * Destruktor klasy MainWindow.
     */
    ~MainWindow();

private slots:
    /**
     * Obsługuje kliknięcie przycisku dodawania lotu.
     * Pobiera dane z pól tekstowych i zapisuje nowy lot do bazy.
     */
    void on_btnAddFlight_clicked();

    /**
     * Obsługuje kliknięcie przycisku usuwania lotu.
     * Usuwa zaznaczony lot z bazy i aktualizuje widok.
     */
    void on_btnDeleteFlight_clicked();

    /**
     * Obsługuje kliknięcie przycisku filtrowania lotów.
     * Filtruje wyświetlaną listę według zaznaczonych dni tygodnia.
     */
    void on_btnFilter_clicked();

private:
    Ui::MainWindow *ui; ///< Interfejs użytkownika
    Database db; ///< Obiekt bazy danych przechowujący loty

    /**
     * Wczytuje loty z bazy i aktualizuje tabelę w GUI.
     */
    void loadFlights();

    /**
     * Pobiera listę zaznaczonych dni tygodnia, które mają być użyte do filtrowania.
     * @return Wektor liczb odpowiadających dniom tygodnia (1 = poniedziałek, ..., 7 = niedziela).
     */
    QVector<int> getSelectedDays();
};

#endif // MAINWINDOW_H
