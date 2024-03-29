#include "registration.h"
#include "ui_registration.h"
#include "login.h"
#include "profile.h"
#include "analytic.h"

Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_pushButton_2_clicked()
{
    this->hide();
    Login *login;
    login = new Login(this);
    login->show();

}

void Registration::on_pushButton_clicked()
{
    Login conn;
    QString username = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    QString passwordc = ui->lineEditConfirmPassword->text();

    // Проверка на пустые поля
    if(username.isEmpty() || password.isEmpty() || passwordc.isEmpty()) {
        ui->Status->setText("Please fill in all fields");
        return;
    }

    if (password != passwordc) {
        ui->Status->setText("Passwords do not match");
        return;
    }

    try {
        QSqlQuery qry;
        qry.prepare("SELECT * FROM User WHERE username = :username");
        qry.bindValue(":username", username);

        if (qry.exec()) {
            if (qry.next()) {
                ui->Status->setText("Username is already used");
            } else {
                QSqlQuery qry2;
                qry2.prepare("INSERT INTO User (username, password) VALUES (:username, :password)");
                qry2.bindValue(":username", username);
                qry2.bindValue(":password", password);

                if (qry2.exec()) {
                    // Создание и показ окна Profile
                    QSqlQuery qry3;
                    qry3.prepare("INSERT INTO User1 VALUES(:name)");
                    qry3.bindValue(":name",username);
                    if(!qry3.exec())
                        qDebug() << "Failed to load username";
                }
                    Profile *profile = new Profile(this);
                    profile->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
                    profile->show();
                    this->hide();

            }
        }
    } catch (const std::exception& e) {
        qDebug() << "Exception occurred: " << e.what();
    }
}
