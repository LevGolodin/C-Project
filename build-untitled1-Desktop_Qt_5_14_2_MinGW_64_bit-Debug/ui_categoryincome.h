/********************************************************************************
** Form generated from reading UI file 'categoryincome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYINCOME_H
#define UI_CATEGORYINCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryIncome
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CategoryIncome)
    {
        if (CategoryIncome->objectName().isEmpty())
            CategoryIncome->setObjectName(QString::fromUtf8("CategoryIncome"));
        CategoryIncome->resize(800, 600);
        menubar = new QMenuBar(CategoryIncome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        CategoryIncome->setMenuBar(menubar);
        centralwidget = new QWidget(CategoryIncome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CategoryIncome->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CategoryIncome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CategoryIncome->setStatusBar(statusbar);

        retranslateUi(CategoryIncome);

        QMetaObject::connectSlotsByName(CategoryIncome);
    } // setupUi

    void retranslateUi(QMainWindow *CategoryIncome)
    {
        CategoryIncome->setWindowTitle(QCoreApplication::translate("CategoryIncome", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryIncome: public Ui_CategoryIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYINCOME_H
