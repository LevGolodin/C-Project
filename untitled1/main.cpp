#include "mainwindow.h"

#include <QApplication>

bool init()
{
    // Connect + unmarshall config + log err
}



// >> main initialize server +
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
