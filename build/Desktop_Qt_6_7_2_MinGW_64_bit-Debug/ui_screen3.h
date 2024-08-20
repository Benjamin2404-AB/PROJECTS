/********************************************************************************
** Form generated from reading UI file 'screen3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN3_H
#define UI_SCREEN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screen3
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *screen3)
    {
        if (screen3->objectName().isEmpty())
            screen3->setObjectName("screen3");
        screen3->resize(800, 600);
        centralwidget = new QWidget(screen3);
        centralwidget->setObjectName("centralwidget");
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
    } // retranslateUi

};

namespace Ui {
    class screen3: public Ui_screen3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN3_H
