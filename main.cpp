// main.cpp - Główny plik startowy aplikacji
// Autor: Wojciech Domino
// Projekt: Baza danych lotów z interfejsem graficznym (Qt + JSON)
// Data: 26.01.2025
// Opis: Inicjalizuje aplikację Qt i uruchamia główne okno użytkownika.

#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    // Inicjalizacja aplikacji Qt
    QApplication app(argc, argv);

    // Tworzenie głównego okna aplikacji
    MainWindow mainWindow;
    mainWindow.show();

    // Uruchomienie pętli zdarzeń Qt, aby interfejs działał dynamicznie
    return app.exec();
}
