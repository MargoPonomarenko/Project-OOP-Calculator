#include "mainwindow.h"
#include "screenmodulefabric.h"

ScreenModuleFabric::ScreenModuleFabric()
{

}

void ScreenModuleFabric::createModule(QWidget *parent)
{
    ScreenWidget *screenWidget = new ScreenWidget(parent);
    MainWindow *window = (MainWindow *)parent;
    window->setScreenWidget(screenWidget);
}
