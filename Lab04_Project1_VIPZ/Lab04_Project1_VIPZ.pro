QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    foradd.cpp \
    fordelete.cpp \
    info.cpp \
    list.cpp \
    main.cpp \
    mainwindow.cpp \
    sortwindow.cpp

HEADERS += \
    foradd.h \
    fordelete.h \
    info.h \
    list.h \
    mainwindow.h \
    sortwindow.h

FORMS += \
    foradd.ui \
    fordelete.ui \
    info.ui \
    mainwindow.ui \
    sortwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
