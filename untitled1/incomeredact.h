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

private:
    Ui::Incomeredact *ui;
};

#endif // INCOMEREDACT_H
