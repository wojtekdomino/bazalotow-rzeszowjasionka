#include <gtest/gtest.h>
#include "database.h"

// Test dodawania lotu
TEST(DatabaseTest, CanAddFlight) {
    Database db;
    Flight flight = {"FR2134", "Rzeszów", "Londyn", "10:00", "Ryanair", "FR2134", "B738", {1, 3, 5}};
    EXPECT_TRUE(db.addFlight(flight));
}

// Test usuwania lotu
TEST(DatabaseTest, CanDeleteFlight) {
    Database db;
    Flight flight = {"FR2134", "Rzeszów", "Londyn", "10:00", "Ryanair", "FR2134", "B738", {1, 3, 5}};
    db.addFlight(flight);
    EXPECT_TRUE(db.deleteFlight("FR2134"));
}

// Test poprawnego wczytywania lotów
TEST(DatabaseTest, CanLoadFlights) {
    Database db;
    EXPECT_TRUE(db.loadFromJson("flights.json"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
