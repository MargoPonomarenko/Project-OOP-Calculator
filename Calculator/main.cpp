#include "maincoordinator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    MainCoordinator coordinator;

    return a.exec();
}
