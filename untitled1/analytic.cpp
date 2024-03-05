#include "analytic.h"
#include "ui_analytic.h"

Analytic::Analytic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Analytic)
{
    ui->setupUi(this);
}

Analytic::~Analytic()
{
    delete ui;
}
