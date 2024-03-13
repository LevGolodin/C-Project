#include "expense.h"
#include "ui_expense.h"
#include "analytic.h"
#include "income.h"
#include "expenseredact.h"
#include "categoryexpense.h"
#include <QtSql>

Expense::Expense(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Expense)
{
    QSqlQuery qry;
    qry.prepare("SELECT name FROM User1");

    if (qry.exec()) {
        if (qry.next()){
            QString login = qry.value(0).toString();
            qDebug() << "Login from database: " << login;
            ui->setupUi(this);

    auto actInsert = new QAction("Insert", this);
    auto actDelete = new QAction("Delete", this);

    // you can set up slot connections here or in designer
    connect(actInsert, SIGNAL(triggered()), this, SLOT(addItem()));
    connect(actDelete, SIGNAL(triggered()), this, SLOT(eraseItem()));

    // and this will take care of everything else:
    ui->listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget->addActions({ actInsert, actDelete });
    QSqlQuery qry;
    qry.prepare("SELECT name FROM Category");
    if(qry.exec()){
        while (qry.next()){
            ui->listWidget->addItem(qry.value(0).toString());
        }
    }
    else {
        qDebug() << "No records found in db";
    }
    }
        } else {
            qDebug() << "No records found in the query result";
        }

}



Expense::~Expense()
{
    delete ui;
}



void Expense::on_pushButton_3_clicked()
{
    Analytic *analytic = new Analytic(this);
    analytic->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    analytic->show();
    this->hide();
}

void Expense::on_pushButton_4_clicked()
{
    Income *income = new Income(this);
    income->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление
    income->show();
    this->hide();
}

void Expense::on_addExtense_clicked()
{
    Expenseredact *ered = new Expenseredact(this);
    ered->setAttribute(Qt::WA_DeleteOnClose);
    ered->show();
}


void Expense::addItem () {
    CategoryExpense *cex = new CategoryExpense(this);
    cex->setAttribute(Qt::WA_DeleteOnClose);
    cex->show();
}

void Expense::eraseItem () {
    for (int i = 0; i < ui->listWidget->selectedItems().size(); ++i) {
        // Get curent item on selected row
        QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow());
        // And remove it
        delete item;
}
}
