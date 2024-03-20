#include "income.h"
#include "ui_income.h"
#include "expense.h"
#include "analytic.h"
#include "incomeredact.h"
#include "categoryincome.h"
#include <QtSql>

Income::Income(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Income)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);

    auto actInsert = new QAction("Insert category", this);
    auto actInsert2 = new QAction("Insert income", this);
    auto actDelete = new QAction("Delete", this);

    // you can set up slot connections here or in designer
    connect(actInsert, SIGNAL(triggered()), this, SLOT(addItem()));
    connect(actDelete, SIGNAL(triggered()), this, SLOT(eraseItem()));
    connect(actInsert2, SIGNAL(triggered()), this, SLOT(addItem2()));

    // and this will take care of everything else:
    ui->listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget->addActions({ actInsert, actDelete });
    ui->listWidget_2->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget_2->addActions({ actInsert2, actDelete });
    QSqlQuery qry;
    qry.prepare("SELECT name FROM CategoryIncome");
    if(qry.exec()){
        while (qry.next()){
            ui->listWidget->addItem(qry.value(0).toString());
        }
    }
    else {
        qDebug() << "No records found in db";
    }
    QSqlQuery qry1;
    qry1.prepare("Select income || ' - ' || date || ' - ' || CategoryIncome.name AS Income  FROM Income JOIN CategoryIncome ON Income.idCategory = CategoryIncome.id WHERE idUser = (SELECT id FROM User Where username = (Select name FROm User1))");
    if(qry1.exec()){
        while (qry1.next()){
            QString income = qry1.value(0).toString();
            qDebug() << "Income: " << income;
            ui->listWidget_2->addItem(income);
        }
    } else {
        qDebug() << "Error executing query: " << qry1.lastError().text();
    }
    qry.prepare("SELECT SUM(income) FROM Income WHERE idUser = (SELECT id FROM User WHERE username = '"+ login +"')");
    qry.exec();
    while(qry.next())
    {
        ui->label_4->setNum(qry.value(0).toInt());
    }
    }
        } else {
            qDebug() << "No records found in the query result";
        }

}

Income::~Income()
{
    delete ui;
}

void Income::on_pushButton_3_clicked()
{
    Analytic *analytic = new Analytic(this);
    analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    analytic->show();
    this->hide();
}

void Income::on_pushButton_4_clicked()
{
    Expense *expense = new Expense(this);
    expense->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    expense->show();
    this->hide();
}


void Income::addItem () {
    CategoryIncome *cin = new CategoryIncome(this);
    cin->setAttribute(Qt::WA_DeleteOnClose);
    cin->show();
}

void Income::addItem2 () {
    Incomeredact *inr = new Incomeredact(this);
    inr->setAttribute(Qt::WA_DeleteOnClose);
    inr->show();
}

void Income::eraseItem () {
    for (int i = 0; i < ui->listWidget->selectedItems().size(); ++i) {
        // Get curent item on selected row
        QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow());
        // And remove it
        delete item;
}
}
