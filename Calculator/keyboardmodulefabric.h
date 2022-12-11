#ifndef KEYBOARDMODULEFABRIC_H
#define KEYBOARDMODULEFABRIC_H
#include "modulefabric.h"
#include "keyboardwidget.h"

class KeyboardModuleFabric: public ModuleFabric
{
public:
    KeyboardModuleFabric();

    void createModule(QWidget *parent) override;
};

#endif // KEYBOARDMODULEFABRIC_H
