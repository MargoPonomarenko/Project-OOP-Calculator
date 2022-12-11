#ifndef MODULEFABRIC_H
#define MODULEFABRIC_H

#include <QWidget>

class ModuleFabric
{
public:
    ModuleFabric();
    virtual void createModule(QWidget *parent = nullptr) = 0;
};

#endif // MODULEFABRIC_H
