#include "expense.h"
#include "ui_expense.h"
#include "analytic.h"
#include "income.h"

Expense::Expense(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Expense)
{
    ui->setupUi(this);
}

Expense::~Expense()
{
    delete ui;
}

void Expense::on_pushButton_3_clicked()
{
    Analytic *analytic = new Analytic(this);
    analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    analytic->show();
    this->hide();
}

void Expense::on_pushButton_4_clicked()
{
    Income *income = new Income(this);
    income->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    income->show();
    this->hide();
}
