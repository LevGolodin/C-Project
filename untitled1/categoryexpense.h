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

private:
    Ui::CategoryExpense *ui;
};

#endif // CATEGORYEXPENSE_H
