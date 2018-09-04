#-------------------------------------------------
#
# Project created by QtCreator 2018-08-04T12:22:36
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CliniC
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    clickablelabel.cpp \
    admins_management.cpp \
    deleteadmindialog.cpp \
    patients_management.cpp \
    patient.cpp \
    dailypatientinfo.cpp \
    clinicdaytime.cpp \
    showdailypatients.cpp \
    bookcommingappointment.cpp

HEADERS += \
        mainwindow.h \
    clickablelabel.h \
    admins_management.h \
    deleteadmindialog.h \
    patients_management.h \
    patient.h \
    dailypatientinfo.h \
    clinicdaytime.h \
    showdailypatients.h \
    bookcommingappointment.h

FORMS += \
        mainwindow.ui \
    deleteadmindialog.ui \
    patients_management.ui \
    dailypatientinfo.ui \
    clinicdaytime.ui \
    showdailypatients.ui \
    bookcommingappointment.ui

RESOURCES += \
    app_res.qrc