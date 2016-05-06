#-------------------------------------------------
#
# Project created by QtCreator 2016-04-30T18:16:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = memoryAllocationGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    process.cpp \
    allocate.cpp

HEADERS  += mainwindow.h \
    process.h \
    allocate.h

FORMS    += mainwindow.ui
