#include "crew.h"
#include "ui_crew.h"

Crew::Crew(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Crew)
{
    ui->setupUi(this);
}

Crew::~Crew()
{
    delete ui;
}
