#-------------------------------------------------
#
# Project created by QtCreator 2013-05-22T19:34:16
#
#-------------------------------------------------

QT       += core gui widgets svg xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Simuduino
TEMPLATE = app


SOURCES +=  element.cpp \
            main.cpp \
            mainwindow.cpp \
            svgview.cpp \
            voiture.cpp \
    elementmanager.cpp

HEADERS  += element.h \
            mainwindow.h \
            svgview.h \
            voiture.h \
    elementmanager.h

FORMS    += mainwindow.ui

TRANSLATIONS = simuduino_fr.ts

CONFIG += console

OTHER_FILES +=
