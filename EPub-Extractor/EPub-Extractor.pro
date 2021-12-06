QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    filelistwidget.cpp \
    filepickerthread.cpp \
    filepickerwidget.cpp \
    main.cpp \
    extractordialog.cpp

HEADERS += \
    extractordialog.h \
    filelistwidget.h \
    filepickerthread.h \
    filepickerwidget.h

FORMS += \
    extractordialog.ui \
    filelistwidget.ui \
    filepickerwidget.ui

TRANSLATIONS += \
    EPub-Extractor_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
