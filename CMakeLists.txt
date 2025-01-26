cmake_minimum_required(VERSION 3.16)

# Ustawienia projektu
project(BazaLotowJasionka LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Znalezienie i dodanie Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Tworzenie głównej aplikacji
add_executable(BazaLotowJasionka
    main.cpp
    mainwindow.cpp
    mainwindow.h
    database.cpp
    database.h
)

# Linkowanie aplikacji z Qt
target_link_libraries(BazaLotowJasionka PRIVATE Qt6::Widgets)

# Pobieranie Google Test (GTest) automatycznie
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

# Tworzenie testów Google Test
add_executable(DatabaseTests gtest_database.cpp)
target_link_libraries(DatabaseTests PRIVATE gtest_main)

# Włączenie testów w CMake
enable_testing()
add_test(NAME DatabaseTest COMMAND DatabaseTests)
