/********************************************************************************
** Form generated from reading UI file 'recordvitals.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDVITALS_H
#define UI_RECORDVITALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recordVitals
{
public:
    QWidget *centralwidget;
    QLabel *myLabel2;
    QLineEdit *patID;
    QLabel *label;
    QLineEdit *temp;
    QLineEdit *pulserate;
    QLineEdit *sys;
    QLineEdit *dys;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *backtoMain;
    QLabel *label_6;
    QLineEdit *resprate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recordVitals)
    {
        if (recordVitals->objectName().isEmpty())
            recordVitals->setObjectName("recordVitals");
        recordVitals->resize(800, 600);
        centralwidget = new QWidget(recordVitals);
        centralwidget->setObjectName("centralwidget");
        myLabel2 = new QLabel(centralwidget);
        myLabel2->setObjectName("myLabel2");
        myLabel2->setGeometry(QRect(180, 110, 441, 371));
        myLabel2->setAutoFillBackground(false);
        myLabel2->setStyleSheet(QString::fromUtf8("\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32,191,223,1), stop:1 rgba(19,71,78,1),stop:3  rgba(2,0,36,1));*/\n"
"\n"
"border-radius:15px;\n"
"border:2px solid rgba(32,191,223,1);\n"
"box-shadow: rgba(100, 100, 111, 0.2) 0px 7px 29px 0px;"));
        patID = new QLineEdit(centralwidget);
        patID->setObjectName("patID");
        patID->setGeometry(QRect(210, 140, 331, 51));
        patID->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        patID->setPlaceholderText(QString::fromUtf8("ID of Patient"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 40, 391, 51));
        label->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:30px;\n"
"color:white;"));
        temp = new QLineEdit(centralwidget);
        temp->setObjectName("temp");
        temp->setGeometry(QRect(360, 220, 211, 31));
        temp->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:4px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        temp->setPlaceholderText(QString::fromUtf8("\302\260C"));
        pulserate = new QLineEdit(centralwidget);
        pulserate->setObjectName("pulserate");
        pulserate->setGeometry(QRect(360, 260, 211, 31));
        pulserate->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:4px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        pulserate->setPlaceholderText(QString::fromUtf8("beats  per minute"));
        sys = new QLineEdit(centralwidget);
        sys->setObjectName("sys");
        sys->setGeometry(QRect(360, 340, 211, 31));
        sys->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:4px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        sys->setPlaceholderText(QString::fromUtf8("systolic"));
        dys = new QLineEdit(centralwidget);
        dys->setObjectName("dys");
        dys->setGeometry(QRect(360, 380, 211, 31));
        dys->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:4px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        dys->setPlaceholderText(QString::fromUtf8("diastolic"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 210, 121, 51));
        label_2->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:15px;\n"
"color:white;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 250, 151, 51));
        label_3->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:15px;\n"
"color:white;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 330, 211, 51));
        label_4->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:12px;\n"
"color:white;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 370, 211, 51));
        label_5->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:12px;\n"
"color:white;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 420, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font-family: Poppins;\n"
"font-size:11px;\n"
"background-color:rgb(32, 191, 223);\n"
"color:black;"));
        backtoMain = new QPushButton(centralwidget);
        backtoMain->setObjectName("backtoMain");
        backtoMain->setGeometry(QRect(210, 430, 121, 41));
        backtoMain->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 290, 151, 51));
        label_6->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:15px;\n"
"color:white;"));
        resprate = new QLineEdit(centralwidget);
        resprate->setObjectName("resprate");
        resprate->setGeometry(QRect(360, 300, 211, 31));
        resprate->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:4px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        resprate->setPlaceholderText(QString::fromUtf8("beats  per minute"));
        recordVitals->setCentralWidget(centralwidget);
        menubar = new QMenuBar(recordVitals);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        recordVitals->setMenuBar(menubar);
        statusbar = new QStatusBar(recordVitals);
        statusbar->setObjectName("statusbar");
        recordVitals->setStatusBar(statusbar);

        retranslateUi(recordVitals);

        QMetaObject::connectSlotsByName(recordVitals);
    } // setupUi

    void retranslateUi(QMainWindow *recordVitals)
    {
        recordVitals->setWindowTitle(QCoreApplication::translate("recordVitals", "MainWindow", nullptr));
        myLabel2->setText(QString());
        label->setText(QCoreApplication::translate("recordVitals", "RECORD VITALS", nullptr));
        sys->setText(QString());
        label_2->setText(QCoreApplication::translate("recordVitals", "Temperature", nullptr));
        label_3->setText(QCoreApplication::translate("recordVitals", "Pulse Rate", nullptr));
        label_4->setText(QCoreApplication::translate("recordVitals", "Blood Pressure Systolic", nullptr));
        label_5->setText(QCoreApplication::translate("recordVitals", "Blood Pressure Diastolic", nullptr));
        pushButton->setText(QCoreApplication::translate("recordVitals", "Record Vitals", nullptr));
        backtoMain->setText(QCoreApplication::translate("recordVitals", "Back to Main Menu", nullptr));
        label_6->setText(QCoreApplication::translate("recordVitals", "Respiratory Rate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recordVitals: public Ui_recordVitals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDVITALS_H
