#-------------------------------------------------
#
# Project created by QtCreator 2013-11-17T17:55:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LEDMatrixEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frame.cpp \
    framemanager.cpp \
    timemanager.cpp \
    ledmatrix.cpp \
    letter.cpp \
    addtextanimationdialog.cpp \
    savedialog.cpp \
    addworddialog.cpp

HEADERS  += mainwindow.h \
    frame.h \
    framemanager.h \
    timemanager.h \
    ledmatrix.h \
    addtextanimationdialog.h \
    letter.h \
    font3x6.h \
    font5x7.h \
    savedialog.h \
    addworddialog.h

FORMS    += mainwindow.ui \
    ledmatrix.ui \
    addtextanimationdialog.ui \
    savedialog.ui \
    addworddialog.ui

CONFIG += c++11
