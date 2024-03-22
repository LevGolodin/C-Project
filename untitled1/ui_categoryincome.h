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

class Ui_CategoryIncome
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *Status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CategoryIncome)
    {
        if (CategoryIncome->objectName().isEmpty())
            CategoryIncome->setObjectName(QString::fromUtf8("CategoryIncome"));
        CategoryIncome->resize(800, 600);
        centralwidget = new QWidget(CategoryIncome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 120, 291, 171));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        Status = new QLabel(centralwidget);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setGeometry(QRect(530, 210, 171, 31));
        CategoryIncome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CategoryIncome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CategoryIncome->setMenuBar(menubar);
        statusbar = new QStatusBar(CategoryIncome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CategoryIncome->setStatusBar(statusbar);

        retranslateUi(CategoryIncome);

        QMetaObject::connectSlotsByName(CategoryIncome);
    } // setupUi

    void retranslateUi(QMainWindow *CategoryIncome)
    {
        CategoryIncome->setWindowTitle(QCoreApplication::translate("CategoryIncome", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CategoryIncome", "\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \321\201\320\262\320\276\321\216 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216 \320\264\320\276\321\205\320\276\320\264\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("CategoryIncome", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CategoryIncome", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        Status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CategoryIncome: public Ui_CategoryIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYINCOME_H
