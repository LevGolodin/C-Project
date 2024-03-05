#ifndef CONS_H
#define CONS_H

#include <QMainWindow>

namespace Ui {
class Cons;
}

class Cons : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cons(QWidget *parent = nullptr);
    ~Cons();

private:
    Ui::Cons *ui;
};

#endif // CONS_H
