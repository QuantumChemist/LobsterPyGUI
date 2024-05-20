QT += core gui widgets
CONFIG += c++11

SOURCES += main.cpp mainwindow.cpp
HEADERS += mainwindow.h
FORMS += mainwindow.ui

INCLUDEPATH += /usr/include/python3.10
LIBS += -L/usr/lib -lpython3.10

