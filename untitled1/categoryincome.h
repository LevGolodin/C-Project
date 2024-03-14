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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CategoryIncome *ui;
};

#endif // CATEGORYINCOME_H
