#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include "profile.h"
#include "registration.h"
#include "analytic.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QString username = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    QString user = ui->lineEditLogin->text();


    if(username.isEmpty() || password.isEmpty()) {
        ui->Status->setText("Please enter username and password.");
        return;
    }

    if(!connOpen()){
        qDebug() << "Failed to connect";
        return;
    }

    QSqlQuery qry;
    qry.prepare("select * from User where username=:username and password=:password");
    qry.bindValue(":username", username);
    qry.bindValue(":password", password);

    if(qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count == 1)
        {
            QSqlQuery qry2;
            qry2.prepare("SELECT * FROM User WHERE username = :username AND first_name IS NOT NULL");
            qry2.bindValue(":username",username);
            if (qry2.exec()){
            if (qry2.next()) {
                connClose();
                Analytic *analytic = new Analytic(this);
                analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
                analytic->show();
                this->hide();
                m_dataObject->setStringData(user);
            } else {
                connClose();
                Profile *profile = new Profile(this);
                profile->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
                profile->show();
                this->hide();

            }
}
        }
        else {
            ui->Status->setText("Username or password is incorrect");
        }
    }
    connClose();
}

void Login::on_pushButton_2_clicked()
{
    Registration *regist = new Registration(this);
    regist->setAttribute(Qt::WA_DeleteOnClose);
    regist->show();
    this->hide();
}

