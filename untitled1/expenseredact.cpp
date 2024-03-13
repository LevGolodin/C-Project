#include "expenseredact.h"
#include "ui_expenseredact.h"

Expenseredact::Expenseredact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Expenseredact)
{
    ui->setupUi(this);
}

Expenseredact::~Expenseredact()
{
    delete ui;
}
