#include "categoryincome.h"
#include "ui_categoryincome.h"
#include <QtSql>

CategoryIncome::CategoryIncome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CategoryIncome)
{
    ui->setupUi(this);
}

CategoryIncome::~CategoryIncome()
{
    delete ui;
}

void CategoryIncome::on_pushButton_clicked()
{
    QString category = ui->lineEdit->text().trimmed();
    if(category.isEmpty())
    {
        ui->Status->setText("Введены пустые значения");
        return;
    }else{
        QSqlQuery qry;
        qry.prepare("Select name FROM CategoryIncome WHERE name = '"+ category +"'");
        if(qry.exec())
            if(qry.next())
            {
                ui->Status->setText("Такая категория уже существует");
                return;
            } else {
                QSqlQuery qry;
                qry.prepare("INSERT INTO CategoryIncome VALUES (NULL, '"+ category +"')");
                if(qry.exec())
                {
                    ui->Status->setText("Категория успешно добавлена");
                } else {
                    ui->Status->setText("Error");
                };
            }
    }
}

void CategoryIncome::on_pushButton_2_clicked()
{
    this->hide();
}
