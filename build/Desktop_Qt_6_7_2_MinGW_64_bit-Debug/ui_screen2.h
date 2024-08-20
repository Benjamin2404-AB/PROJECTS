/********************************************************************************
** Form generated from reading UI file 'screen2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN2_H
#define UI_SCREEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screen2
{
public:
    QWidget *centralwidget;
    QFrame *regHospCard;
    QLineEdit *Hospital;
    QLineEdit *HOPDHEADER;
    QLineEdit *numberRooms;
    QPushButton *pushButton;
    QLabel *myLabel2;
    QFrame *MainMenu;
    QLabel *Hospital_3;
    QPushButton *showPatient;
    QPushButton *showRoomAss;
    QPushButton *assiRoom;
    QPushButton *regPatient;
    QPushButton *recPVitals;
    QLabel *menu;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *screen2)
    {
        if (screen2->objectName().isEmpty())
            screen2->setObjectName("screen2");
        screen2->resize(1058, 937);
        centralwidget = new QWidget(screen2);
        centralwidget->setObjectName("centralwidget");
        regHospCard = new QFrame(centralwidget);
        regHospCard->setObjectName("regHospCard");
        regHospCard->setGeometry(QRect(270, 230, 481, 381));
        regHospCard->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        Hospital = new QLineEdit(regHospCard);
        Hospital->setObjectName("Hospital");
        Hospital->setGeometry(QRect(70, 140, 331, 51));
        Hospital->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        Hospital->setPlaceholderText(QString::fromUtf8("Enter the name of your Hospital"));
        HOPDHEADER = new QLineEdit(regHospCard);
        HOPDHEADER->setObjectName("HOPDHEADER");
        HOPDHEADER->setGeometry(QRect(130, 70, 261, 51));
        HOPDHEADER->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:none;\n"
"border-radius:5px;\n"
"font-family: Poppins;\n"
"font-weight:500;\n"
"font-size: 30px;\n"
"color:white;\n"
"text-align:Center;\n"
""));
        numberRooms = new QLineEdit(regHospCard);
        numberRooms->setObjectName("numberRooms");
        numberRooms->setGeometry(QRect(70, 220, 331, 51));
        numberRooms->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        pushButton = new QPushButton(regHospCard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 300, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius:3px;\n"
"background-color: rgb(19, 100, 114);\n"
"font-family:Poppins;\n"
"font-size:10px;\n"
""));
        myLabel2 = new QLabel(regHospCard);
        myLabel2->setObjectName("myLabel2");
        myLabel2->setGeometry(QRect(20, 10, 441, 371));
        myLabel2->setAutoFillBackground(false);
        myLabel2->setStyleSheet(QString::fromUtf8("\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32,191,223,1), stop:1 rgba(19,71,78,1),stop:3  rgba(2,0,36,1));*/\n"
"\n"
"border-radius:15px;\n"
"border:2px solid rgba(32,191,223,1);\n"
"box-shadow: rgba(100, 100, 111, 0.2) 0px 7px 29px 0px;"));
        myLabel2->raise();
        HOPDHEADER->raise();
        numberRooms->raise();
        pushButton->raise();
        Hospital->raise();
        MainMenu = new QFrame(centralwidget);
        MainMenu->setObjectName("MainMenu");
        MainMenu->setGeometry(QRect(270, 230, 550, 440));
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
        showPatient = new QPushButton(MainMenu);
        showPatient->setObjectName("showPatient");
        showPatient->setGeometry(QRect(100, 240, 251, 40));
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
""));
        showRoomAss = new QPushButton(MainMenu);
        showRoomAss->setObjectName("showRoomAss");
        showRoomAss->setGeometry(QRect(100, 290, 251, 40));
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
        assiRoom = new QPushButton(MainMenu);
        assiRoom->setObjectName("assiRoom");
        assiRoom->setGeometry(QRect(100, 190, 251, 40));
        assiRoom->setStyleSheet(QString::fromUtf8("border: none;\n"
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
        regPatient = new QPushButton(MainMenu);
        regPatient->setObjectName("regPatient");
        regPatient->setGeometry(QRect(100, 90, 251, 40));
        regPatient->setStyleSheet(QString::fromUtf8("border: none;\n"
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
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        recPVitals = new QPushButton(MainMenu);
        recPVitals->setObjectName("recPVitals");
        recPVitals->setGeometry(QRect(100, 140, 251, 40));
        recPVitals->setStyleSheet(QString::fromUtf8("border: none;\n"
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
        menu->raise();
        Hospital_3->raise();
        assiRoom->raise();
        recPVitals->raise();
        showPatient->raise();
        showRoomAss->raise();
        regPatient->raise();
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 100, 191, 51));
        label->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:900;\n"
"font-size:50px;\n"
"color:white;"));
        screen2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(screen2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1058, 17));
        screen2->setMenuBar(menubar);
        statusbar = new QStatusBar(screen2);
        statusbar->setObjectName("statusbar");
        screen2->setStatusBar(statusbar);

        retranslateUi(screen2);

        QMetaObject::connectSlotsByName(screen2);
    } // setupUi

    void retranslateUi(QMainWindow *screen2)
    {
        screen2->setWindowTitle(QCoreApplication::translate("screen2", "MainWindow", nullptr));
        HOPDHEADER->setText(QCoreApplication::translate("screen2", "HOSPITAL OPD", nullptr));
        numberRooms->setText(QString());
        numberRooms->setPlaceholderText(QCoreApplication::translate("screen2", "Enter number of rooms", nullptr));
        pushButton->setText(QCoreApplication::translate("screen2", "Continue", nullptr));
        myLabel2->setText(QString());
        Hospital_3->setText(QString());
        showPatient->setText(QCoreApplication::translate("screen2", "Show Patient List", nullptr));
        showRoomAss->setText(QCoreApplication::translate("screen2", "Show Room Assignments", nullptr));
        assiRoom->setText(QCoreApplication::translate("screen2", "Assign a Room", nullptr));
        regPatient->setText(QCoreApplication::translate("screen2", "Register A Patient", nullptr));
        recPVitals->setText(QCoreApplication::translate("screen2", "Record Patient Vitals", nullptr));
        menu->setText(QString());
        label->setText(QCoreApplication::translate("screen2", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen2: public Ui_screen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN2_H
