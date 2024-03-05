#ifndef CREW_H
#define CREW_H

#include <QMainWindow>

namespace Ui {
class Crew;
}

class Crew : public QMainWindow
{
    Q_OBJECT

public:
    explicit Crew(QWidget *parent = nullptr);
    ~Crew();

private:
    Ui::Crew *ui;
};

#endif // CREW_H
