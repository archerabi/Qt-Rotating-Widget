#-------------------------------------------------
#
# Project created by QtCreator 2012-12-06T11:58:43
#
#-------------------------------------------------

QT       += core gui webkit

TARGET = example
TEMPLATE = app


SOURCES += main.cpp\
           mainwindow.cpp \
           RotatingStackedWidget.cpp \
    pageone.cpp \
    pagetwo.cpp

HEADERS += mainwindow.h \
           RotatingStackedWidget.h \
    pageone.h \
    pagetwo.h

FORMS    += mainwindow.ui \
    pageone.ui \
    pagetwo.ui

INCLUDEPATH += ../
DEPENDPATH  += ../
