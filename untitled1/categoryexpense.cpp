#include "categoryexpense.h"
#include "ui_categoryexpense.h"

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
