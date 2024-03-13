#include "income.h"
#include "ui_income.h"
#include "expense.h"
#include "analytic.h"

Income::Income(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Income)
{
    ui->setupUi(this);
}

Income::~Income()
{
    delete ui;
}

void Income::on_pushButton_3_clicked()
{
    Analytic *analytic = new Analytic(this);
    analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    analytic->show();
    this->hide();
}

void Income::on_pushButton_4_clicked()
{
    Expense *expense = new Expense(this);
    expense->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    expense->show();
    this->hide();
}
