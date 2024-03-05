#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSql>
#include <QDebug>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    hide();
    login = new Login(this);
    login->show();

}

void MainWindow::on_pushButton_clicked()
{
    hide();
    regist = new Registration(this);
    regist->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    cons = new Cons(this);
    cons->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    about = new AboutUs(this);
    about->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    crew = new Crew(this);
    crew->show();
}

