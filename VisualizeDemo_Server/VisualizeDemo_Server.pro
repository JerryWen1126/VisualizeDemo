#-------------------------------------------------
#
# Project created by QtCreator 2022-03-01T00:21:11
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VisualizeDemo_Server
TEMPLATE = app


SOURCES += main.cpp\
        vserver.cpp \
    tcpclientsocket.cpp \
    tcpserver.cpp

HEADERS  += vserver.h \
    tcpclientsocket.h \
    tcpserver.h

FORMS    += vserver.ui
