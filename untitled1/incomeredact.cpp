#include "incomeredact.h"
#include "ui_incomeredact.h"
#include <QtSql>

Incomeredact::Incomeredact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Incomeredact)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);


    QSqlQuery qry;
    qry.prepare("SELECT name FROM CategoryIncome");
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

Incomeredact::~Incomeredact()
{
    delete ui;
}



void Incomeredact::on_pushButton_clicked()
{
    QSqlQuery qry;
    qry.prepare("SELECT id FROM User Where username = (Select name FROM User1)");
    qry.exec();
    while (qry.next()){
        QString user = qry.value(0).toString();
    }
    QString category = ui->lineEdit_2->text();
    QString price = ui->lineEdit->text();
    QString date = ui->dateEdit->text();

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
             QSqlQuery qry;
             qry.prepare("Select name from CategoryIncome where name = '"+ category+ "'");
             qry.exec();
             if(qry.next())
             {
                 category = qry.value(0).toString();
                 QSqlQuery qry1;
                 qry1.prepare("INSERT INTO Income(Income, idUser, date, idCategory) VALUES (:income,:user,:date,:category)");
                 qry1.bindValue(":income",price );
                 qry1.bindValue(":user", login);
                 qry1.bindValue(":date", date);
                 qry1.bindValue(":category",category);
                 if(qry1.exec())
                 {
                     ui->label_3->setText("Данные успешно введены");
                 }

             }
        } else {
            qDebug() << "No records found in the query result";
        }
    }
}

void Incomeredact::on_pushButton_2_clicked()
{
    this->hide();
}
