/********************************************************************************
** Form generated from reading UI file 'crew.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREW_H
#define UI_CREW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Crew
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Crew)
    {
        if (Crew->objectName().isEmpty())
            Crew->setObjectName(QString::fromUtf8("Crew"));
        Crew->resize(800, 600);
        centralwidget = new QWidget(Crew);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 40, 141, 81));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 140, 101, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/SUx182.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 250, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 280, 101, 81));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/photo_5321167624945652260_y.jpg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 370, 47, 13));
        Crew->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Crew);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Crew->setMenuBar(menubar);
        statusbar = new QStatusBar(Crew);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Crew->setStatusBar(statusbar);

        retranslateUi(Crew);

        QMetaObject::connectSlotsByName(Crew);
    } // setupUi

    void retranslateUi(QMainWindow *Crew)
    {
        Crew->setWindowTitle(QCoreApplication::translate("Crew", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Crew", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Crew", "\320\233\320\265\320\262\321\207\320\270\320\272", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("Crew", "\320\224\320\270\320\274\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crew: public Ui_Crew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREW_H
