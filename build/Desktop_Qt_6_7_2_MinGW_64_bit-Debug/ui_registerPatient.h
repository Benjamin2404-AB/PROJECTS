/********************************************************************************
** Form generated from reading UI file 'registerPatient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPATIENT_H
#define UI_REGISTERPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screen3
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *regHospCard;
    QLineEdit *patientName;
    QLineEdit *patientAge;
    QPushButton *backtoMain;
    QLabel *myLabel2;
    QPushButton *regPat;
    QPushButton *pushButton_3;
    QRadioButton *Male;
    QRadioButton *Female;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *screen3)
    {
        if (screen3->objectName().isEmpty())
            screen3->setObjectName("screen3");
        screen3->resize(800, 600);
        centralwidget = new QWidget(screen3);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 90, 291, 41));
        label->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:30px;\n"
"color:white;"));
        regHospCard = new QFrame(centralwidget);
        regHospCard->setObjectName("regHospCard");
        regHospCard->setGeometry(QRect(180, 150, 481, 381));
        regHospCard->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        patientName = new QLineEdit(regHospCard);
        patientName->setObjectName("patientName");
        patientName->setGeometry(QRect(70, 80, 331, 51));
        patientName->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        patientName->setPlaceholderText(QString::fromUtf8("Name of Patient"));
        patientAge = new QLineEdit(regHospCard);
        patientAge->setObjectName("patientAge");
        patientAge->setGeometry(QRect(70, 160, 331, 51));
        patientAge->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        backtoMain = new QPushButton(regHospCard);
        backtoMain->setObjectName("backtoMain");
        backtoMain->setGeometry(QRect(40, 320, 121, 41));
        backtoMain->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
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
        regPat = new QPushButton(regHospCard);
        regPat->setObjectName("regPat");
        regPat->setGeometry(QRect(120, 250, 171, 51));
        regPat->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        pushButton_3 = new QPushButton(regHospCard);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 310, 171, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        Male = new QRadioButton(regHospCard);
        Male->setObjectName("Male");
        Male->setGeometry(QRect(130, 220, 69, 18));
        Male->setStyleSheet(QString::fromUtf8("font: 12px  white Poppins;"));
        Female = new QRadioButton(regHospCard);
        Female->setObjectName("Female");
        Female->setGeometry(QRect(240, 220, 69, 18));
        Female->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:12px"));
        myLabel2->raise();
        patientAge->raise();
        backtoMain->raise();
        patientName->raise();
        regPat->raise();
        pushButton_3->raise();
        Male->raise();
        Female->raise();
        screen3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(screen3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        screen3->setMenuBar(menubar);
        statusbar = new QStatusBar(screen3);
        statusbar->setObjectName("statusbar");
        screen3->setStatusBar(statusbar);

        retranslateUi(screen3);

        QMetaObject::connectSlotsByName(screen3);
    } // setupUi

    void retranslateUi(QMainWindow *screen3)
    {
        screen3->setWindowTitle(QCoreApplication::translate("screen3", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("screen3", "REGISTER PATIENT", nullptr));
        patientAge->setText(QString());
        patientAge->setPlaceholderText(QCoreApplication::translate("screen3", "Age", nullptr));
        backtoMain->setText(QCoreApplication::translate("screen3", "Back to Main Menu", nullptr));
        myLabel2->setText(QString());
        regPat->setText(QCoreApplication::translate("screen3", "Register Patient", nullptr));
        pushButton_3->setText(QCoreApplication::translate("screen3", "Assign Patient A room", nullptr));
        Male->setText(QCoreApplication::translate("screen3", "Male", nullptr));
        Female->setText(QCoreApplication::translate("screen3", "Female", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen3: public Ui_screen3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPATIENT_H
