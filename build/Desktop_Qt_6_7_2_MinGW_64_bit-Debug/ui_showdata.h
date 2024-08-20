/********************************************************************************
** Form generated from reading UI file 'showdata.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDATA_H
#define UI_SHOWDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showData
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *MainMenu;
    QLabel *Hospital_3;
    QPushButton *showRoomAss;
    QPushButton *showPatient;
    QLabel *menu;
    QPushButton *backtoMain;
    QLabel *patientData;
    QPushButton *backtoMain_2;
    QTableWidget *tableData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *showData)
    {
        if (showData->objectName().isEmpty())
            showData->setObjectName("showData");
        showData->resize(800, 600);
        centralwidget = new QWidget(showData);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 80, 291, 41));
        label->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:30px;\n"
"color:white;"));
        MainMenu = new QFrame(centralwidget);
        MainMenu->setObjectName("MainMenu");
        MainMenu->setGeometry(QRect(150, 140, 550, 440));
        MainMenu->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        Hospital_3 = new QLabel(MainMenu);
        Hospital_3->setObjectName("Hospital_3");
        Hospital_3->setGeometry(QRect(20, 0, 231, 50));
        Hospital_3->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:12px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:0.4px solid white;\n"
"border-radius:5px;\n"
"padding:3px;\n"
"background-color: rgb(27, 141, 163);\n"
"\n"
"\n"
""));
        showRoomAss = new QPushButton(MainMenu);
        showRoomAss->setObjectName("showRoomAss");
        showRoomAss->setGeometry(QRect(100, 180, 251, 40));
        showRoomAss->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius:3px;\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));*/\n"
"\n"
"\n"
"/* CSS */\n"
"\n"
"  background-color: rgb(19, 100, 114);\n"
"  \n"
"  border-style: none;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family:Poppins;\n"
"  font-size: 14px;\n"
"  font-weight: 500;\n"
"  height: 40px;\n"
"  line-height: 20px;\n"
"  list-style: none;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 10px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  transition: color 100ms;\n"
"  vertical-align: baseline;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
""));
        showPatient = new QPushButton(MainMenu);
        showPatient->setObjectName("showPatient");
        showPatient->setGeometry(QRect(100, 120, 251, 40));
        showPatient->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius:3px;\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));*/\n"
"\n"
"\n"
"/* CSS */\n"
"\n"
"  background-color: rgb(19, 100, 114);\n"
"  \n"
"  border-style: none;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family:Poppins;\n"
"  font-size: 14px;\n"
"  font-weight: 500;\n"
"  height: 40px;\n"
"  line-height: 20px;\n"
"  list-style: none;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 10px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  transition: color 100ms;\n"
"  vertical-align: baseline;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"\n"
"\n"
"\n"
""));
        menu = new QLabel(MainMenu);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, 10, 450, 380));
        menu->setAutoFillBackground(false);
        menu->setStyleSheet(QString::fromUtf8("\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32,191,223,1), stop:1 rgba(19,71,78,1),stop:3  rgba(2,0,36,1));*/\n"
"\n"
"border-radius:15px;\n"
"border:2px solid rgba(32,191,223,1) ;\n"
"box-shadow: rgba(100, 100, 111, 0.2) 0px 7px 29px 0px;\n"
"font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:500;\n"
"color:white;\n"
"text-align:center;\n"
"opacity:0.4;\n"
""));
        menu->setTextInteractionFlags(Qt::NoTextInteraction);
        backtoMain = new QPushButton(MainMenu);
        backtoMain->setObjectName("backtoMain");
        backtoMain->setGeometry(QRect(100, 270, 121, 41));
        backtoMain->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        menu->raise();
        Hospital_3->raise();
        showRoomAss->raise();
        showPatient->raise();
        backtoMain->raise();
        patientData = new QLabel(centralwidget);
        patientData->setObjectName("patientData");
        patientData->setGeometry(QRect(100, 119, 561, 451));
        patientData->setAutoFillBackground(false);
        patientData->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32,191,223,1), stop:1 rgba(19,71,78,1),stop:3  rgba(2,0,36,1));\n"
"\n"
"border-radius:15px;\n"
"border:2px solid rgba(32,191,223,1) ;\n"
"/*box-shadow: rgba(100, 100, 111, 0.2) 0px 7px 29px 0px;*/\n"
"font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:500;\n"
"color:white;\n"
"text-align:center;\n"
"opacity:0.4;\n"
"padding:10px;\n"
"margin: 5px 0px;\n"
""));
        patientData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        patientData->setMargin(29);
        patientData->setIndent(27);
        patientData->setTextInteractionFlags(Qt::NoTextInteraction);
        backtoMain_2 = new QPushButton(centralwidget);
        backtoMain_2->setObjectName("backtoMain_2");
        backtoMain_2->setGeometry(QRect(200, 510, 121, 41));
        backtoMain_2->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"background-color:transparent;\n"
"border:2px solid rgb(26, 138, 159);\n"
"border-radius:2px;"));
        tableData = new QTableWidget(centralwidget);
        if (tableData->columnCount() < 15)
            tableData->setColumnCount(15);
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(7);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(29, 27, 1));
        tableData->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setBackground(QColor(3, 7, 24));
        tableData->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        __qtablewidgetitem2->setBackground(QColor(0, 30, 33));
        tableData->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins")});
        font1.setPointSize(7);
        font1.setItalic(true);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        __qtablewidgetitem3->setBackground(QColor(9, 10, 0));
        tableData->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        __qtablewidgetitem4->setBackground(QColor(9, 10, 0));
        tableData->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        __qtablewidgetitem5->setBackground(QColor(9, 10, 0));
        tableData->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        __qtablewidgetitem6->setBackground(QColor(9, 10, 0));
        tableData->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        __qtablewidgetitem7->setBackground(QColor(9, 10, 0));
        tableData->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableData->setObjectName("tableData");
        tableData->setGeometry(QRect(90, 120, 601, 451));
        tableData->setMaximumSize(QSize(700, 490));
        tableData->setStyleSheet(QString::fromUtf8("font-size:10px;"));
        tableData->setRowCount(0);
        tableData->setColumnCount(15);
        tableData->horizontalHeader()->setVisible(true);
        tableData->verticalHeader()->setMinimumSectionSize(9);
        tableData->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        showData->setCentralWidget(centralwidget);
        label->raise();
        MainMenu->raise();
        patientData->raise();
        tableData->raise();
        backtoMain_2->raise();
        menubar = new QMenuBar(showData);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        showData->setMenuBar(menubar);
        statusbar = new QStatusBar(showData);
        statusbar->setObjectName("statusbar");
        showData->setStatusBar(statusbar);

        retranslateUi(showData);

        QMetaObject::connectSlotsByName(showData);
    } // setupUi

    void retranslateUi(QMainWindow *showData)
    {
        showData->setWindowTitle(QCoreApplication::translate("showData", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("showData", "GET INFO", nullptr));
        Hospital_3->setText(QString());
        showRoomAss->setText(QCoreApplication::translate("showData", "Show Room Assignments", nullptr));
        showPatient->setText(QCoreApplication::translate("showData", "Show Patients", nullptr));
        menu->setText(QString());
        backtoMain->setText(QCoreApplication::translate("showData", "Back to Main Menu", nullptr));
        patientData->setText(QString());
        backtoMain_2->setText(QCoreApplication::translate("showData", "Back to Main Menu", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableData->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("showData", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableData->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("showData", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableData->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("showData", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableData->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("showData", "Temperature", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableData->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("showData", "Pulse Rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableData->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("showData", "RespRate", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableData->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("showData", "Systolic BP", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableData->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("showData", "Diastolic BP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showData: public Ui_showData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDATA_H
