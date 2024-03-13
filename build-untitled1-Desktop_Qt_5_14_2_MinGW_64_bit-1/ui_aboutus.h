/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(800, 600);
        centralwidget = new QWidget(AboutUs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 30, 421, 71));
        label->setAlignment(Qt::AlignCenter);
        AboutUs->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AboutUs);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AboutUs->setMenuBar(menubar);
        statusbar = new QStatusBar(AboutUs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AboutUs->setStatusBar(statusbar);

        retranslateUi(AboutUs);

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QMainWindow *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AboutUs", "\320\235\320\276\320\262\320\276\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276 \321\203\321\207\321\221\321\202\321\203 \321\204\320\270\320\275\320\260\320\275\321\201\320\276\320\262 - \320\262\320\260\321\210 \320\275\320\260\320\264\320\265\320\266\320\275\321\213\320\271 \n"
" \320\277\320\276\320\274\320\276\321\211\320\275\320\270\320\272 \320\264\320\273\321\217 \321\215\321\204\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\276\320\263\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\201\320\262\320\276\320\270\320\274\320\270 \321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\260\320\274\320\270!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
