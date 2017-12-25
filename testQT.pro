QT += core
QT -= gui

CONFIG += c++11

TARGET = testQT
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    funcs.cpp

DISTFILES +=

HEADERS += \
    funcs.h
