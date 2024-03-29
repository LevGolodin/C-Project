QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include/
VPATH += src/

SOURCES += \
    aboutus.cpp \
    analytic.cpp \
    categoryexpense.cpp \
    categoryincome.cpp \
    cons.cpp \
    crew.cpp \
    expense.cpp \
    expenseredact.cpp \
    income.cpp \
    incomeredact.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    profile.cpp \
    registration.cpp \
    src/qcustomplot.cpp

HEADERS += \
    aboutus.h \
    analytic.h \
    categoryexpense.h \
    categoryincome.h \
    cons.h \
    crew.h \
    expense.h \
    expenseredact.h \
    include/qcustomplot.h \
    income.h \
    incomeredact.h \
    login.h \
    mainwindow.h \
    profile.h \
    registration.h

FORMS += \
    aboutus.ui \
    analytic.ui \
    categoryexpense.ui \
    categoryincome.ui \
    cons.ui \
    crew.ui \
    expense.ui \
    expenseredact.ui \
    income.ui \
    incomeredact.ui \
    login.ui \
    mainwindow.ui \
    profile.ui \
    registration.ui

TRANSLATIONS += \
    untitled1_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
