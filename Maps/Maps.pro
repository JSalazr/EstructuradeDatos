#-------------------------------------------------
#
# Project created by QtCreator 2015-12-13T09:04:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Maps
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    nodo.cpp \
    arista.cpp \
    tablad.cpp \
    dijkstra.cpp \
    floyd.cpp \
    label.cpp

HEADERS  += mainwindow.h \
    nodo.h \
    arista.h \
    tablad.h \
    dijkstra.h \
    floyd.h \
    label.h

FORMS    += mainwindow.ui \
    label.ui

DISTFILES += \
    mapa.jpg
