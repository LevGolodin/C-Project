#include "categoryincome.h"
#include "ui_categoryincome.h"

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
