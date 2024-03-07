#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT


public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/ISP920/Desktop/C-Project/LevProject.db");

        if(!mydb.open()){
            qDebug()<<("Failed to open the database");
            return false;
    }
        else{
            qDebug()<<("Connected...");
            return true;
        }
    }

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

public slots:
    void on_pushButton_clicked();

signals:
    void mySignal(const QString &text);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
