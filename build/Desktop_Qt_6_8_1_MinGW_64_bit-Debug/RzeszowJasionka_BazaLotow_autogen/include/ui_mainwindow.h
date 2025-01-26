/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkMonday;
    QCheckBox *checkTuesday;
    QCheckBox *checkWednesday;
    QCheckBox *checkThursday;
    QCheckBox *checkFriday;
    QCheckBox *checkSaturday;
    QCheckBox *checkSunday;
    QPushButton *btnFilter;
    QLineEdit *inputSearch;
    QPushButton *btnSearch;
    QLineEdit *inputArrival;
    QLineEdit *inputDeparture;
    QLineEdit *inputFlightCode;
    QLineEdit *inputTime;
    QLineEdit *inputFlightNumber;
    QLineEdit *inputCarrier;
    QLineEdit *inputAircraftType;
    QPushButton *btnAddFlight;
    QPushButton *btnDeleteFlight;
    QTableWidget *tableFlights;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(867, 600);
        MainWindow->setMinimumSize(QSize(800, 400));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setMinimumSize(QSize(1600, 1000));
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 871, 441));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkMonday = new QCheckBox(horizontalLayoutWidget);
        checkMonday->setObjectName("checkMonday");

        verticalLayout->addWidget(checkMonday);

        checkTuesday = new QCheckBox(horizontalLayoutWidget);
        checkTuesday->setObjectName("checkTuesday");

        verticalLayout->addWidget(checkTuesday);

        checkWednesday = new QCheckBox(horizontalLayoutWidget);
        checkWednesday->setObjectName("checkWednesday");

        verticalLayout->addWidget(checkWednesday);

        checkThursday = new QCheckBox(horizontalLayoutWidget);
        checkThursday->setObjectName("checkThursday");

        verticalLayout->addWidget(checkThursday);

        checkFriday = new QCheckBox(horizontalLayoutWidget);
        checkFriday->setObjectName("checkFriday");

        verticalLayout->addWidget(checkFriday);

        checkSaturday = new QCheckBox(horizontalLayoutWidget);
        checkSaturday->setObjectName("checkSaturday");

        verticalLayout->addWidget(checkSaturday);

        checkSunday = new QCheckBox(horizontalLayoutWidget);
        checkSunday->setObjectName("checkSunday");

        verticalLayout->addWidget(checkSunday);

        btnFilter = new QPushButton(horizontalLayoutWidget);
        btnFilter->setObjectName("btnFilter");
        btnFilter->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(btnFilter);

        inputSearch = new QLineEdit(horizontalLayoutWidget);
        inputSearch->setObjectName("inputSearch");
        inputSearch->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputSearch);

        btnSearch = new QPushButton(horizontalLayoutWidget);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(btnSearch);

        inputArrival = new QLineEdit(horizontalLayoutWidget);
        inputArrival->setObjectName("inputArrival");
        inputArrival->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputArrival);

        inputDeparture = new QLineEdit(horizontalLayoutWidget);
        inputDeparture->setObjectName("inputDeparture");
        inputDeparture->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputDeparture);

        inputFlightCode = new QLineEdit(horizontalLayoutWidget);
        inputFlightCode->setObjectName("inputFlightCode");
        inputFlightCode->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputFlightCode);

        inputTime = new QLineEdit(horizontalLayoutWidget);
        inputTime->setObjectName("inputTime");
        inputTime->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputTime);

        inputFlightNumber = new QLineEdit(horizontalLayoutWidget);
        inputFlightNumber->setObjectName("inputFlightNumber");
        inputFlightNumber->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputFlightNumber);

        inputCarrier = new QLineEdit(horizontalLayoutWidget);
        inputCarrier->setObjectName("inputCarrier");
        inputCarrier->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputCarrier);

        inputAircraftType = new QLineEdit(horizontalLayoutWidget);
        inputAircraftType->setObjectName("inputAircraftType");
        inputAircraftType->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(inputAircraftType);

        btnAddFlight = new QPushButton(horizontalLayoutWidget);
        btnAddFlight->setObjectName("btnAddFlight");
        btnAddFlight->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(btnAddFlight);

        btnDeleteFlight = new QPushButton(horizontalLayoutWidget);
        btnDeleteFlight->setObjectName("btnDeleteFlight");
        btnDeleteFlight->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(btnDeleteFlight);


        horizontalLayout_3->addLayout(verticalLayout);

        tableFlights = new QTableWidget(horizontalLayoutWidget);
        if (tableFlights->columnCount() < 7)
            tableFlights->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableFlights->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableFlights->setObjectName("tableFlights");
        tableFlights->setMinimumSize(QSize(600, 400));
        tableFlights->setMaximumSize(QSize(1000, 1000));
        tableFlights->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_3->addWidget(tableFlights);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 867, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lotnisko Rzesz\303\263w-Jasionka", nullptr));
        checkMonday->setText(QCoreApplication::translate("MainWindow", "Poniedzia\305\202ek", nullptr));
        checkTuesday->setText(QCoreApplication::translate("MainWindow", "Wtorek", nullptr));
        checkWednesday->setText(QCoreApplication::translate("MainWindow", "\305\232roda", nullptr));
        checkThursday->setText(QCoreApplication::translate("MainWindow", "Czwartek", nullptr));
        checkFriday->setText(QCoreApplication::translate("MainWindow", "Pi\304\205tek", nullptr));
        checkSaturday->setText(QCoreApplication::translate("MainWindow", "Sobota", nullptr));
        checkSunday->setText(QCoreApplication::translate("MainWindow", "Niedziela", nullptr));
        btnFilter->setText(QCoreApplication::translate("MainWindow", "Filtruj loty", nullptr));
        inputSearch->setText(QString());
        inputSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj dane lotu", nullptr));
        btnSearch->setText(QCoreApplication::translate("MainWindow", "Szukaj lotu", nullptr));
        inputArrival->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj miejsce przylotu", nullptr));
        inputDeparture->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj miejsce wylotu", nullptr));
        inputFlightCode->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj numer rejsu", nullptr));
        inputTime->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj godzin\304\231 lotu", nullptr));
        inputFlightNumber->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj numer lotu", nullptr));
        inputCarrier->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj przewo\305\272nika", nullptr));
        inputAircraftType->setPlaceholderText(QCoreApplication::translate("MainWindow", "Podaj typ samolotu", nullptr));
        btnAddFlight->setText(QCoreApplication::translate("MainWindow", "Dodaj lot", nullptr));
        btnDeleteFlight->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 lot", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableFlights->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Numer lotu", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableFlights->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Wylot", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableFlights->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Przylot", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableFlights->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Godzina", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableFlights->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Przewo\305\272nik", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableFlights->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Nr rejsu", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableFlights->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Typ samolotu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
