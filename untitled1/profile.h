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

public slots:
    void recieveStringData(QString user);



public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private:
    Ui::Profile *ui;
};

#endif // PROFILE_H
