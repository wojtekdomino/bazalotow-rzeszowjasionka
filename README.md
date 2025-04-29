# Rzeszów-Jasionka Flight Database Management System (C++/Qt)

## ✈️ About the Project
This project is a C++ application developed as part of university coursework for an Object-Oriented Programming class.  
It manages a simple flight database for the Rzeszów-Jasionka airport, allowing users to add, view, and manage flight information through a graphical user interface (GUI) built with Qt.

## 🛠️ Tech Stack
- C++
- Qt Framework (Qt Widgets, .ui layout)
- CMake
- Google Test (Unit Testing)

## 📂 Features
- Add and manage flight entries (origin, destination, time)
- Graphical User Interface (GUI) with Qt Designer
- Data persistence using in-memory database structures
- Unit testing with Google Test framework
- Error handling and input validation

## 🗂️ Project Structure
- `/src/` – Application source files (main.cpp, database.cpp, mainwindow.cpp)
- `/ui/` – User interface files (.ui)
- `/tests/` – Google Test unit tests for database functionality
- `CMakeLists.txt` – Build configuration

## 🚀 How to Run
1. Clone the repository:
git clone https://github.com/wojtekdomino/bazalotow-rzeszowjasionka.git
2. Open the project in Qt Creator or build with CMake manually.
3. Run the compiled application.

## 🧪 Running Tests
- Use CMake to build and run the unit tests located in `gtest_database.cpp`.

## 📌 Future Improvements
- Integration with a real SQL database
- Extended search and filter options
- Exporting/importing flights data from/to files

## 👤 Author
Wojciech Domino  
[GitHub Profile](https://github.com/wojtekdomino)

---
