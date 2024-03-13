/********************************************************************************
** Form generated from reading UI file 'categoryexpense.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYEXPENSE_H
#define UI_CATEGORYEXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryExpense
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CategoryExpense)
    {
        if (CategoryExpense->objectName().isEmpty())
            CategoryExpense->setObjectName(QString::fromUtf8("CategoryExpense"));
        CategoryExpense->resize(800, 600);
        menubar = new QMenuBar(CategoryExpense);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        CategoryExpense->setMenuBar(menubar);
        centralwidget = new QWidget(CategoryExpense);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CategoryExpense->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CategoryExpense);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CategoryExpense->setStatusBar(statusbar);

        retranslateUi(CategoryExpense);

        QMetaObject::connectSlotsByName(CategoryExpense);
    } // setupUi

    void retranslateUi(QMainWindow *CategoryExpense)
    {
        CategoryExpense->setWindowTitle(QCoreApplication::translate("CategoryExpense", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryExpense: public Ui_CategoryExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYEXPENSE_H
