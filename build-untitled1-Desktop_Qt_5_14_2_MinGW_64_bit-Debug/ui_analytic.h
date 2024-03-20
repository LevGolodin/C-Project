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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Analytic
{
public:
    QWidget *centralwidget;
    QCustomPlot *customplot;
    QLabel *label;
    QCustomPlot *customplot_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Analytic)
    {
        if (Analytic->objectName().isEmpty())
            Analytic->setObjectName(QString::fromUtf8("Analytic"));
        Analytic->resize(800, 600);
        centralwidget = new QWidget(Analytic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        customplot = new QCustomPlot(centralwidget);
        customplot->setObjectName(QString::fromUtf8("customplot"));
        customplot->setGeometry(QRect(220, 190, 341, 171));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 131, 41));
        customplot_2 = new QCustomPlot(centralwidget);
        customplot_2->setObjectName(QString::fromUtf8("customplot_2"));
        customplot_2->setGeometry(QRect(220, 380, 341, 161));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 70, 571, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 210, 81, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        Analytic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Analytic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Analytic->setMenuBar(menubar);
        statusbar = new QStatusBar(Analytic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Analytic->setStatusBar(statusbar);

        retranslateUi(Analytic);

        QMetaObject::connectSlotsByName(Analytic);
    } // setupUi

    void retranslateUi(QMainWindow *Analytic)
    {
        Analytic->setWindowTitle(QCoreApplication::translate("Analytic", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Analytic", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Analytic", "\320\240\320\260\321\201\321\205\320\276\320\264\321\213 \320\267\320\260 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\264\320\260\321\202\321\203", nullptr));
        label_3->setText(QCoreApplication::translate("Analytic", "0", nullptr));
        label_4->setText(QCoreApplication::translate("Analytic", "\320\224\320\260\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("Analytic", "\320\224\320\276\321\205\320\276\320\264\321\213 \320\267\320\260 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\264\320\260\321\202\321\203", nullptr));
        label_7->setText(QCoreApplication::translate("Analytic", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Analytic", "\320\224\320\260\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("Analytic", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\276\320\265 \321\201\320\276\320\276\321\202\320\275\320\276\321\210\320\265\320\275\320\270\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("Analytic", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("Analytic", "\320\224\320\276\321\205\320\276\320\264\321\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Analytic", "\320\240\320\260\321\201\321\205\320\276\320\264\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Analytic: public Ui_Analytic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYTIC_H
