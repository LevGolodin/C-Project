#include "analytic.h"
#include "ui_analytic.h"
#include "income.h"
#include "expense.h"
#include <QDate>
#include <QtSql>

Analytic::Analytic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Analytic)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);
    QDate currentDate = QDate::currentDate();

    // Преобразуем текущую дату в строку
    QString currentDateString = currentDate.toString("dd.MM.yyyy");
    ui->label_4->setText(currentDateString);
    ui->label_5->setText(currentDateString);
    QSqlQuery qry;
    qry.prepare("SELECT SUM(income) FROM Income WHERE date = (SELECT strftime('%d.%m.%Y', date('now'))) and idUser = (SELECT id FROM User WHERE username = '"+ login +"')");
    if(qry.exec())
        if(qry.next())
    {
        ui->label_3->setNum(qry.value(0).toInt());
    }
    qry.prepare("SELECT SUM(expense) FROM Expense WHERE date = (SELECT strftime('%d.%m.%Y', date('now')))and idUser = (SELECT id FROM User WHERE username = '"+ login +"')");
    if(qry.exec())
        if(qry.next())
    {
        ui->label_7->setNum(qry.value(0).toInt());
    }

}
    }
}


Analytic::~Analytic()
{
    delete ui;
}

void Analytic::on_pushButton_clicked()
{
    Income *income = new Income(this);
    income->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    income->show();
    this->hide();
}

void Analytic::on_pushButton_2_clicked()
{
    Expense *expense = new Expense(this);
    expense->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    expense->show();
    this->hide();
}
