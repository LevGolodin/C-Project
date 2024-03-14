#include "categoryexpense.h"
#include "ui_categoryexpense.h"
#include <QtSql>

CategoryExpense::CategoryExpense(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CategoryExpense)
{
    ui->setupUi(this);
}

CategoryExpense::~CategoryExpense()
{
    delete ui;
}

void CategoryExpense::on_pushButton_clicked()
{
    QString category = ui->lineEdit->text().trimmed();
    if(category.isEmpty())
    {
        ui->Status->setText("Введены пустые значения");
        return;
    }else{
        QSqlQuery qry;
        qry.prepare("Select name FROM Category WHERE name = '"+ category +"'");
        if(qry.exec())
            if(qry.next())
            {
                ui->Status->setText("Такая категория уже существует");
                return;
            } else {
                QSqlQuery qry;
                qry.prepare("INSERT INTO Category VALUES (NULL, '"+ category +"')");
                if(qry.exec())
                {
                    ui->Status->setText("Категория успешно добавлена");
                } else {
                    ui->Status->setText("Error");
                }
                ;
            }
    }
}

void CategoryExpense::on_pushButton_2_clicked()
{
        this->hide();
}
