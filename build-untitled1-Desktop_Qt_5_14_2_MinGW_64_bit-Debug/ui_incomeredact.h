/********************************************************************************
** Form generated from reading UI file 'incomeredact.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMEREDACT_H
#define UI_INCOMEREDACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Incomeredact
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Incomeredact)
    {
        if (Incomeredact->objectName().isEmpty())
            Incomeredact->setObjectName(QString::fromUtf8("Incomeredact"));
        Incomeredact->resize(800, 600);
        menubar = new QMenuBar(Incomeredact);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Incomeredact->setMenuBar(menubar);
        centralwidget = new QWidget(Incomeredact);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Incomeredact->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Incomeredact);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Incomeredact->setStatusBar(statusbar);

        retranslateUi(Incomeredact);

        QMetaObject::connectSlotsByName(Incomeredact);
    } // setupUi

    void retranslateUi(QMainWindow *Incomeredact)
    {
        Incomeredact->setWindowTitle(QCoreApplication::translate("Incomeredact", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Incomeredact: public Ui_Incomeredact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMEREDACT_H
