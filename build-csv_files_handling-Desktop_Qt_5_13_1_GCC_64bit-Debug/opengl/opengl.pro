TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QT += opengl

SOURCES += \
        main.cpp




INCLUDEPATH += -L/usr/lib/x86_64-linux-gnu/
LIBS += -lGL -lGLU -lglut
