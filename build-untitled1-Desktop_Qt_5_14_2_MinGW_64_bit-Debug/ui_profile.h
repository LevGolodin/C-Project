/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(800, 600);
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 80, 221, 61));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 200, 181, 51));
        Profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Profile);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Profile->setMenuBar(menubar);
        statusbar = new QStatusBar(Profile);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Profile->setStatusBar(statusbar);

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Profile", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214! \n"
"\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\262\320\276\320\270 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
