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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryExpense
{
public:
    QWidget *centralwidget;
    QLabel *Status;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CategoryExpense)
    {
        if (CategoryExpense->objectName().isEmpty())
            CategoryExpense->setObjectName(QString::fromUtf8("CategoryExpense"));
        CategoryExpense->resize(800, 600);
        centralwidget = new QWidget(CategoryExpense);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Status = new QLabel(centralwidget);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setGeometry(QRect(580, 260, 171, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 170, 291, 171));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        CategoryExpense->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CategoryExpense);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CategoryExpense->setMenuBar(menubar);
        statusbar = new QStatusBar(CategoryExpense);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CategoryExpense->setStatusBar(statusbar);

        retranslateUi(CategoryExpense);

        QMetaObject::connectSlotsByName(CategoryExpense);
    } // setupUi

    void retranslateUi(QMainWindow *CategoryExpense)
    {
        CategoryExpense->setWindowTitle(QCoreApplication::translate("CategoryExpense", "MainWindow", nullptr));
        Status->setText(QString());
        label->setText(QCoreApplication::translate("CategoryExpense", "\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \321\201\320\262\320\276\321\216 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("CategoryExpense", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CategoryExpense", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryExpense: public Ui_CategoryExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYEXPENSE_H
