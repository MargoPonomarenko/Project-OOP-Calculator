#ifndef MAINMODULEFABRIC_H
#define MAINMODULEFABRIC_H
#include "modulefabric.h"

class MainModuleFabrice: public ModuleFabric
{
public:
    MainModuleFabrice();


    // ModuleFabric interface
    void createModule(QWidget *parent = nullptr) override;
};

#endif // MAINMODULEFABRIC_H
