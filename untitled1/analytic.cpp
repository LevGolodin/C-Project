#include "analytic.h"
#include "ui_analytic.h"
#include "income.h"
#include "expense.h"
#include <QDate>

Analytic::Analytic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Analytic)
{
    ui->setupUi(this);
    QDate currentDate = QDate::currentDate();

    // Преобразуем текущую дату в строку
    QString currentDateString = currentDate.toString("dd.MM.yyyy");
    ui->label_4->setText(currentDateString);
    ui->label_5->setText(currentDateString);
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
