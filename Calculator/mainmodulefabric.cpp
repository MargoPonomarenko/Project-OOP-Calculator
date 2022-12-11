#include "keyboardmodulefabric.h"
#include "mainmodulefabric.h"
#include "mainwindow.h"
#include "screenmodulefabric.h"

#include <QMainWindow>

MainModuleFabrice::MainModuleFabrice()
{

}

void MainModuleFabrice::createModule(QWidget *parent)
{
    MainWindow *mainWin = new MainWindow;

    ScreenModuleFabric screenFabric;
    screenFabric.createModule(mainWin);

    KeyboardModuleFabric keyboardFabric;
    keyboardFabric.createModule(mainWin);

    mainWin->show();

}
