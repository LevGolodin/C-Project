/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionG0;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionG0 = new QAction(MainWindow);
        actionG0->setObjectName(QString::fromUtf8("actionG0"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 151, 51));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(350, 320, 121, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(415, 0, 381, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setAutoFillBackground(false);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setAutoFillBackground(false);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setAutoFillBackground(false);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 140, 351, 161));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setMidLineWidth(0);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setMidLineWidth(0);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionG0->setText(QCoreApplication::translate("MainWindow", "G0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DimonLev4ik", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\275\320\260\321\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\321\217\320\271, \321\215\320\272\320\276\320\275\320\276\320\274\321\214, \321\200\320\260\321\201\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\233\321\203\321\207\321\210\320\265\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \321\203\321\207\320\265\321\202\320\260 \321\204\320\270\320\275\320\260\320\275\321\201\320\276\320\262 \320\277\320\276 \320\275\320\260\321\210\320\265\320\274\321\203 \320\274\320\275\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
