#include "profile.h"
#include "ui_profile.h"
#include "login.h"
#include <QtSql>
#include "analytic.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);
            ui->label->setText("Добро пожаловать " + login + "! \nВведите свои дополнительные данные");
            QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
            QValidator *validator = new QRegularExpressionValidator(re, this);
            ui->lineEdit_email->setValidator(validator);
        } else {
            qDebug() << "No records found in the query result";
        }
    } else {
        qDebug() << "Failed to execute the query";
    }
}
Profile::~Profile()
{
    delete ui;
}


void Profile::on_pushButton_clicked()
{
    QString login;
    QString firstname = ui->lineEdit_firstname->text().trimmed();
    QString lastname = ui->lineEdit_lastname->text().trimmed();
    QString email = ui->lineEdit_email->text().trimmed();

    if(firstname.isEmpty() || lastname.isEmpty() || email.isEmpty()) {
        qDebug() << "Please enter all information.";
        return;
    }

    QSqlQuery qry2("SELECT name FROM User1");
    if (qry2.next()) {
        login = qry2.value(0).toString();
    } else {
        qDebug() << "No login found in User1 table.";
        return;
    }

    QSqlQuery qry;
    qry.prepare("UPDATE User SET first_name = :firstname, last_name = :lastname, email = :email WHERE username = :login");
    qry.bindValue(":login", login);
    qry.bindValue(":firstname", firstname);
    qry.bindValue(":lastname", lastname);
    qry.bindValue(":email", email);

    if (qry.exec()) {
        qDebug() << "Row updated successfully";
        Analytic *analytic = new Analytic(this);
        analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
        analytic->show();
        this->hide();

    } else {
        qDebug() << "Error updating row:" << qry.lastError().text();
    }
}
