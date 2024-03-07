/********************************************************************************
** Form generated from reading UI file 'analytic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYTIC_H
#define UI_ANALYTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Analytic
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Analytic)
    {
        if (Analytic->objectName().isEmpty())
            Analytic->setObjectName(QString::fromUtf8("Analytic"));
        Analytic->resize(800, 600);
        menubar = new QMenuBar(Analytic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Analytic->setMenuBar(menubar);
        centralwidget = new QWidget(Analytic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Analytic->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Analytic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Analytic->setStatusBar(statusbar);

        retranslateUi(Analytic);

        QMetaObject::connectSlotsByName(Analytic);
    } // setupUi

    void retranslateUi(QMainWindow *Analytic)
    {
        Analytic->setWindowTitle(QCoreApplication::translate("Analytic", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Analytic: public Ui_Analytic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYTIC_H
