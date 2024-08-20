/********************************************************************************
** Form generated from reading UI file 'assignpatientroom.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNPATIENTROOM_H
#define UI_ASSIGNPATIENTROOM_H

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

class Ui_AssignPatientRoom
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *assPCROOM;
    QLineEdit *pName;
    QLineEdit *cRoom;
    QPushButton *backtoMain;
    QLabel *myLabel2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AssignPatientRoom)
    {
        if (AssignPatientRoom->objectName().isEmpty())
            AssignPatientRoom->setObjectName("AssignPatientRoom");
        AssignPatientRoom->resize(800, 600);
        centralwidget = new QWidget(AssignPatientRoom);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 80, 391, 51));
        label->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-weight:500;\n"
"font-size:30px;\n"
"color:white;"));
        assPCROOM = new QFrame(centralwidget);
        assPCROOM->setObjectName("assPCROOM");
        assPCROOM->setGeometry(QRect(180, 150, 481, 381));
        assPCROOM->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        pName = new QLineEdit(assPCROOM);
        pName->setObjectName("pName");
        pName->setGeometry(QRect(70, 80, 331, 51));
        pName->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        pName->setPlaceholderText(QString::fromUtf8("Name of Patient"));
        cRoom = new QLineEdit(assPCROOM);
        cRoom->setObjectName("cRoom");
        cRoom->setGeometry(QRect(70, 160, 331, 51));
        cRoom->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:15px;\n"
"font-weight:300;\n"
"color:white;\n"
"border:none;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"background-color: #000004;\n"
"opacity:0.8;\n"
""));
        backtoMain = new QPushButton(assPCROOM);
        backtoMain->setObjectName("backtoMain");
        backtoMain->setGeometry(QRect(70, 300, 121, 41));
        backtoMain->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        myLabel2 = new QLabel(assPCROOM);
        myLabel2->setObjectName("myLabel2");
        myLabel2->setGeometry(QRect(20, 10, 441, 371));
        myLabel2->setAutoFillBackground(false);
        myLabel2->setStyleSheet(QString::fromUtf8("\n"
"/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32,191,223,1), stop:1 rgba(19,71,78,1),stop:3  rgba(2,0,36,1));*/\n"
"\n"
"border-radius:15px;\n"
"border:2px solid rgba(32,191,223,1);\n"
"box-shadow: rgba(100, 100, 111, 0.2) 0px 7px 29px 0px;"));
        pushButton_2 = new QPushButton(assPCROOM);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 230, 171, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-family:Poppins;\n"
"font-size:10px;"));
        myLabel2->raise();
        cRoom->raise();
        backtoMain->raise();
        pName->raise();
        pushButton_2->raise();
        AssignPatientRoom->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AssignPatientRoom);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        AssignPatientRoom->setMenuBar(menubar);
        statusbar = new QStatusBar(AssignPatientRoom);
        statusbar->setObjectName("statusbar");
        AssignPatientRoom->setStatusBar(statusbar);

        retranslateUi(AssignPatientRoom);

        QMetaObject::connectSlotsByName(AssignPatientRoom);
    } // setupUi

    void retranslateUi(QMainWindow *AssignPatientRoom)
    {
        AssignPatientRoom->setWindowTitle(QCoreApplication::translate("AssignPatientRoom", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AssignPatientRoom", "ASSIGN  PATIENT A ROOM", nullptr));
        cRoom->setText(QString());
        cRoom->setPlaceholderText(QCoreApplication::translate("AssignPatientRoom", "Consulting Room Number", nullptr));
        backtoMain->setText(QCoreApplication::translate("AssignPatientRoom", "Back to Main Menu", nullptr));
        myLabel2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("AssignPatientRoom", "Assign Patient A Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignPatientRoom: public Ui_AssignPatientRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNPATIENTROOM_H
