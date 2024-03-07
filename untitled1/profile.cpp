#include "profile.h"
#include "ui_profile.h"
#include "login.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::mySlot(const QString text)
{
    QString user = text;
    ui->label_2->setText(user);
}
