#include "expenseredact.h"
#include "ui_expenseredact.h"
#include <QtSql>

Expenseredact::Expenseredact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Expenseredact)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);


    QSqlQuery qry;
    qry.prepare("SELECT name FROM Category");
    if(qry.exec()){
        while (qry.next()){
            ui->listWidget->addItem(qry.value(0).toString());
        }
    }
    else {
        qDebug() << "No records found in db";
    }
    }
        } else {
            qDebug() << "No records found in the query result";
        }

}

Expenseredact::~Expenseredact()
{
    delete ui;
}

void Expenseredact::on_pushButton_2_clicked()
{
    this->hide();
}
