#include "cons.h"
#include "ui_cons.h"

Cons::Cons(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cons)
{
    ui->setupUi(this);
}

Cons::~Cons()
{
    delete ui;
}
