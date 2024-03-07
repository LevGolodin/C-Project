#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include "login.h"

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT




public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private:
    Ui::Profile *ui;


public slots:
    void mySlot(const QString text);
};


#endif // PROFILE_H
