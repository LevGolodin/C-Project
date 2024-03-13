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

private:
    Ui::Expenseredact *ui;
};

#endif // EXPENSEREDACT_H
