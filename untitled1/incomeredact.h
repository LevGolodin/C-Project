#ifndef INCOMEREDACT_H
#define INCOMEREDACT_H

#include <QMainWindow>

namespace Ui {
class Incomeredact;
}

class Incomeredact : public QMainWindow
{
    Q_OBJECT

public:
    explicit Incomeredact(QWidget *parent = nullptr);
    ~Incomeredact();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Incomeredact *ui;
};

#endif // INCOMEREDACT_H
