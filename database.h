#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QVector>

/**
 * Struktura przechowująca informacje o pojedynczym locie.
 * Każdy lot ma numer, miejsce wylotu i przylotu, godzinę,
 * przewoźnika, kod rejsu oraz typ samolotu.
 */
struct Flight {
    QString flightNumber;   // Numer lotu, np. FR1467
    QString departure;      // Miejsce wylotu, np. Rzeszów
    QString arrival;        // Miejsce przylotu, np. Londyn
    QString time;           // Godzina odlotu, np. 12:45
    QString carrier;        // Przewoźnik, np. Ryanair
    QString flightCode;     // Kod rejsu, np. FR1467
    QString aircraftType;   // Typ samolotu, np. B738
    QVector<int> daysOfWeek; // Dni tygodnia, w których odbywa się lot (1 = poniedziałek, ..., 7 = niedziela)
};

/**
 * Klasa zarządzająca bazą lotów. Przechowuje listę lotów i umożliwia
 * dodawanie, usuwanie oraz zapis i odczyt danych z pliku JSON.
 */
class Database {
public:
    /**
     * Konstruktor inicjalizujący bazę lotów.
     */
    Database();

    /**
     * Wczytuje loty z pliku JSON i zapisuje je w wewnętrznej liście.
     * @param filename Nazwa pliku JSON.
     * @return true, jeśli udało się wczytać plik, false w przypadku błędu.
     */
    bool loadFromJson(const QString& filename);

    /**
     * Zapisuje wszystkie loty do pliku JSON.
     * @param filename Nazwa pliku JSON, do którego mają być zapisane dane.
     * @return true, jeśli zapis się powiódł, false w przypadku błędu.
     */
    bool saveToJson(const QString& filename);

    /**
     * Zwraca listę wszystkich lotów zapisanych w bazie.
     * @return Wektor zawierający obiekty Flight.
     */
    QVector<Flight> getFlights();

    /**
     * Dodaje nowy lot do bazy.
     * @param flight Obiekt Flight z danymi nowego lotu.
     * @return true, jeśli lot został dodany, false jeśli już istnieje.
     */
    bool addFlight(const Flight& flight);

    /**
     * Usuwa lot z bazy na podstawie numeru lotu.
     * @param flightNumber Numer lotu do usunięcia.
     * @return true, jeśli lot został usunięty, false jeśli nie znaleziono.
     */
    bool deleteFlight(const QString& flightNumber);

private:
    QVector<Flight> flights; // Wektor przechowujący listę lotów.
};

#endif // DATABASE_H
