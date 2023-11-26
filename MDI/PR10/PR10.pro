QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    audio.cpp \
    audiobook.cpp \
    dialogaudiobookcreate.cpp \
    dialogaudiobookprint.cpp \
    dialogcreatesong.cpp \
    dialogprintsong.cpp \
    main.cpp \
    mainwindow.cpp \
    song.cpp

HEADERS += \
    audio.h \
    audiobook.h \
    dialogaudiobookcreate.h \
    dialogaudiobookprint.h \
    dialogcreatesong.h \
    dialogprintsong.h \
    mainwindow.h \
    song.h

FORMS += \
    dialogaudiobookcreate.ui \
    dialogaudiobookprint.ui \
    dialogcreatesong.ui \
    dialogprintsong.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
