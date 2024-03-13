#ifndef CATEGORYINCOME_H
#define CATEGORYINCOME_H

#include <QMainWindow>

namespace Ui {
class CategoryIncome;
}

class CategoryIncome : public QMainWindow
{
    Q_OBJECT

public:
    explicit CategoryIncome(QWidget *parent = nullptr);
    ~CategoryIncome();

private:
    Ui::CategoryIncome *ui;
};

#endif // CATEGORYINCOME_H
