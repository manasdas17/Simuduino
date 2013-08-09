#-------------------------------------------------
#
# Project created by QtCreator 2013-05-22T19:34:16
#
#-------------------------------------------------

QT       += core gui widgets svg xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Simuduino
TEMPLATE = app

SOURCES +=  main.cpp \
            mainwindow.cpp \
            element.cpp \
            elementmanager.cpp \
            voiture.cpp \
            svgview.cpp

HEADERS  += mainwindow.h \
            element.h \
            elementmanager.h \
            voiture.h \
            svgview.h

FORMS    += mainwindow.ui

TRANSLATIONS = simuduino_fr.ts

CONFIG += console

OTHER_FILES +=
