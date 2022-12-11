#include "calculateservice.h"
#include <QDebug>

CalculateService *CalculateService::shared = nullptr;

void CalculateService::init()
{
    if(shared == nullptr){
        shared = new CalculateService;
    }
    qDebug()<<"CalculeteServise created";
}

void CalculateService::deinit()
{
    if(shared != nullptr){
        delete shared;
        shared = nullptr;
    }
}

CalculateService::CalculateService()
{

}
