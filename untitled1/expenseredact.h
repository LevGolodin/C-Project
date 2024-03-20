#ifndef EXPENSEREDACT_H
#define EXPENSEREDACT_H

#include <QMainWindow>

namespace Ui {
class Expenseredact;
}

class Expenseredact : public QMainWindow
{
    Q_OBJECT

public:
    explicit Expenseredact(QWidget *parent = nullptr);
    ~Expenseredact();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Expenseredact *ui;
};

#endif // EXPENSEREDACT_H
