/********************************************************************************
** Form generated from reading UI file 'expenseredact.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSEREDACT_H
#define UI_EXPENSEREDACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Expenseredact
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Expenseredact)
    {
        if (Expenseredact->objectName().isEmpty())
            Expenseredact->setObjectName(QString::fromUtf8("Expenseredact"));
        Expenseredact->resize(800, 600);
        menubar = new QMenuBar(Expenseredact);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Expenseredact->setMenuBar(menubar);
        centralwidget = new QWidget(Expenseredact);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Expenseredact->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Expenseredact);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Expenseredact->setStatusBar(statusbar);

        retranslateUi(Expenseredact);

        QMetaObject::connectSlotsByName(Expenseredact);
    } // setupUi

    void retranslateUi(QMainWindow *Expenseredact)
    {
        Expenseredact->setWindowTitle(QCoreApplication::translate("Expenseredact", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Expenseredact: public Ui_Expenseredact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSEREDACT_H
