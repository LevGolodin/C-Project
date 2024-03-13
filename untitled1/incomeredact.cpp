#include "incomeredact.h"
#include "ui_incomeredact.h"

Incomeredact::Incomeredact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Incomeredact)
{
    ui->setupUi(this);
}

Incomeredact::~Incomeredact()
{
    delete ui;
}
