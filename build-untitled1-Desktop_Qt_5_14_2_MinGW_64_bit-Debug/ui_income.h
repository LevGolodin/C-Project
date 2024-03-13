/********************************************************************************
** Form generated from reading UI file 'income.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_H
#define UI_INCOME_H

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

class Ui_Income
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QPushButton *addIncome;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Income)
    {
        if (Income->objectName().isEmpty())
            Income->setObjectName(QString::fromUtf8("Income"));
        Income->resize(800, 600);
        centralwidget = new QWidget(Income);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(460, 39, 191, 131));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 129));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 171, 111));
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 200, 77, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 40, 271, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        addIncome = new QPushButton(layoutWidget_2);
        addIncome->setObjectName(QString::fromUtf8("addIncome"));

        verticalLayout_3->addWidget(addIncome);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 20, 191, 16));
        label_5->setAlignment(Qt::AlignCenter);
        Income->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Income);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Income->setMenuBar(menubar);
        statusbar = new QStatusBar(Income);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Income->setStatusBar(statusbar);

        retranslateUi(Income);

        QMetaObject::connectSlotsByName(Income);
    } // setupUi

    void retranslateUi(QMainWindow *Income)
    {
        Income->setWindowTitle(QCoreApplication::translate("Income", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Income", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Income", "\320\240\320\260\321\201\321\205\320\276\320\264\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("Income", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\320\276\321\205\320\276\320\264\321\213", nullptr));
        addIncome->setText(QCoreApplication::translate("Income", "+", nullptr));
        label_3->setText(QCoreApplication::translate("Income", "\320\236\320\261\321\211\320\270\320\265 \320\264\320\276\321\205\320\276\320\264\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("Income", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Income", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Income: public Ui_Income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_H
