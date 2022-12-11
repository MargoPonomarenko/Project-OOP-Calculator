#include "screenwidget.h"
#include <QGridLayout>
#include <QLineEdit>

ScreenWidget::ScreenWidget(QWidget *parent)
    : QWidget{parent}
{
    createCommands();
}

void ScreenWidget::createCommands()
{
    QHBoxLayout *commandsBLayout = new QHBoxLayout;
    for(int i = 0; i < 4; i++){
        QPushButton *button = new QPushButton();
        commandsBLayout->addWidget(button);
    }

    QVBoxLayout *commandsLayout = new QVBoxLayout;
    QLineEdit *historyOutput = new QLineEdit;
    QLineEdit *commandOutput = new QLineEdit;
    commandsLayout->addWidget(historyOutput);
    commandsLayout->addWidget(commandOutput);
    commandsLayout->addLayout(commandsBLayout);
    this->setLayout(commandsLayout);




}
