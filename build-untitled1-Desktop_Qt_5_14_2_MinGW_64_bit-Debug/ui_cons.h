/********************************************************************************
** Form generated from reading UI file 'cons.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONS_H
#define UI_CONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cons
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cons)
    {
        if (Cons->objectName().isEmpty())
            Cons->setObjectName(QString::fromUtf8("Cons"));
        Cons->resize(800, 600);
        centralwidget = new QWidget(Cons);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 141, 41));
        label->setAlignment(Qt::AlignCenter);
        Cons->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cons);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Cons->setMenuBar(menubar);
        statusbar = new QStatusBar(Cons);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cons->setStatusBar(statusbar);

        retranslateUi(Cons);

        QMetaObject::connectSlotsByName(Cons);
    } // setupUi

    void retranslateUi(QMainWindow *Cons)
    {
        Cons->setWindowTitle(QCoreApplication::translate("Cons", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Cons", "\320\235\320\260\321\210\320\270 \320\277\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cons: public Ui_Cons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONS_H
