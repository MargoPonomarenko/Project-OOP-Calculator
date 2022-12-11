#include "maincoordinator.h"
#include "calculateservice.h"
#include "keyboardmodulefabric.h"
#include "mainmodulefabric.h"
#include "screenmodulefabric.h"

MainCoordinator::MainCoordinator(QObject *parent)
    : QObject{parent}
{
    CalculateService::init();
    MainModuleFabrice mainFabric;
    mainFabric.createModule();

}
