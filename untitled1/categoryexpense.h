#ifndef CATEGORYEXPENSE_H
#define CATEGORYEXPENSE_H

#include <QMainWindow>

namespace Ui {
class CategoryExpense;
}

class CategoryExpense : public QMainWindow
{
    Q_OBJECT

public:
    explicit CategoryExpense(QWidget *parent = nullptr);
    ~CategoryExpense();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CategoryExpense *ui;
};

#endif // CATEGORYEXPENSE_H
