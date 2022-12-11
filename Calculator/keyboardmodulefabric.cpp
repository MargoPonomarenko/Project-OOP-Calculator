#include "keyboardmodulefabric.h"
#include "mainwindow.h"

KeyboardModuleFabric::KeyboardModuleFabric()
{

}

void KeyboardModuleFabric::createModule(QWidget *parent)
{
    KeyboardWidget *keyboardWidget = new KeyboardWidget(parent);
    MainWindow *window = (MainWindow *)parent;
    window->setKeyboardWidget(keyboardWidget);
}
