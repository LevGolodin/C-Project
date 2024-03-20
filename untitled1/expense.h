#ifndef EXPENSE_H
#define EXPENSE_H

#include <QMainWindow>

namespace Ui {
class Expense;
}

class Expense : public QMainWindow
{
    Q_OBJECT

public:
    explicit Expense(QWidget *parent = nullptr);
    ~Expense();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


public slots:

    void addItem();

    void eraseItem();

    void addItem2();


private:
    Ui::Expense *ui;
};

#endif // EXPENSE_H
