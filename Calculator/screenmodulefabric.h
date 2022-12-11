#ifndef SCREENMODULEFABRIC_H
#define SCREENMODULEFABRIC_H
#include "modulefabric.h"
#include "screenwidget.h"

class ScreenModuleFabric: public ModuleFabric
{
public:
    ScreenModuleFabric();

    void createModule(QWidget *parent) override;
};

#endif // SCREENMODULEFABRIC_H
