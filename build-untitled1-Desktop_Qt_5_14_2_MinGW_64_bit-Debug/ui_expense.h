/********************************************************************************
** Form generated from reading UI file 'expense.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSE_H
#define UI_EXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Expense
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QListWidget *listWidget_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Expense)
    {
        if (Expense->objectName().isEmpty())
            Expense->setObjectName(QString::fromUtf8("Expense"));
        Expense->resize(800, 600);
        centralwidget = new QWidget(Expense);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 10, 191, 16));
        label_5->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(440, 29, 211, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 139));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 191, 121));
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 30, 271, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 190, 77, 101));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(130, 150, 271, 141));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 269, 139));
        listWidget_3 = new QListWidget(scrollAreaWidgetContents_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(10, 10, 251, 121));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
        Expense->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Expense);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Expense->setMenuBar(menubar);
        statusbar = new QStatusBar(Expense);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Expense->setStatusBar(statusbar);

        retranslateUi(Expense);

        QMetaObject::connectSlotsByName(Expense);
    } // setupUi

    void retranslateUi(QMainWindow *Expense)
    {
        Expense->setWindowTitle(QCoreApplication::translate("Expense", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("Expense", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("Expense", "\320\236\320\261\321\211\320\270\320\265 \321\200\320\260\321\201\321\205\320\276\320\264\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("Expense", "0", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Expense", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Expense", "\320\224\320\276\321\205\320\276\320\264\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Expense: public Ui_Expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSE_H
