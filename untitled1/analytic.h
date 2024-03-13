#ifndef ANALYTIC_H
#define ANALYTIC_H

#include <QMainWindow>

namespace Ui {
class Analytic;
}

class Analytic : public QMainWindow
{
    Q_OBJECT

public:
    explicit Analytic(QWidget *parent = nullptr);
    ~Analytic();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Analytic *ui;
};

#endif // ANALYTIC_H
