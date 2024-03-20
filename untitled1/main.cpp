#include "mainwindow.h"

#include <QApplication>
#include <QtSql>

bool init()
{
    // Connect + unmarshall config + log err
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/ЛЕВ/Desktop/C-Project/LevProject.db");

    if(!mydb.open()){
        qDebug()<<("Failed to open the database");
        return false;
}
    else{
        qDebug()<<("Connected...");
        QSqlQuery qry;
        qry.prepare("DELETE from User1");
        qry.exec();
        return true;
    }
}



// >> main initialize server +
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    if (!init()) {
        return 1; // Выход из программы в случае ошибки
    }
    return a.exec();
}
