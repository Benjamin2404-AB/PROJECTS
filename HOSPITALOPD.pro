QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assignpatientroom.cpp \
    globals.cpp \
    main.cpp \
    mainwindow.cpp \
    recordvitals.cpp \
    registerPatient.cpp \
    screen2.cpp \
    showdata.cpp

HEADERS += \
    Hospital.h \
    Patient.h \
    Vitals.h \
    WIDGETSTYLE.h \
    assignpatientroom.h \
    globals.h \
    mainwindow.h \
    recordvitals.h \
    registerPatient.h \
    screen2.h \
    showdata.h

FORMS += \
    assignpatientroom.ui \
    mainwindow.ui \
    recordvitals.ui \
    registerPatient.ui \
    screen2.ui \
    showdata.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images/res.qrc
