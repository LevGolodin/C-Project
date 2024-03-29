#ifndef INCOME_H
#define INCOME_H

#include <QMainWindow>

namespace Ui {
class Income;
}

class Income : public QMainWindow
{
    Q_OBJECT

public:
    explicit Income(QWidget *parent = nullptr);
    ~Income();

public slots:

    void addItem();

    void eraseItem();

    void addItem2();


private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::Income *ui;
};

#endif // INCOME_H
