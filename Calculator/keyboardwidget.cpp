#include "keyboardwidget.h"

#include <QGridLayout>

KeyboardWidget::KeyboardWidget(QWidget *parent)
    : QWidget{parent}
{
    configure();
    createButtons();

}

void KeyboardWidget::buttonPressed(QPushButton *button)
{
    qDebug()<<"Button pressed "<<button->text();
}

void KeyboardWidget::configure()
{
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
}

void KeyboardWidget::createButtons()
{
    QGridLayout *buttonsLayout = new QGridLayout;

    int n = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++ ){
            QPushButton *button = new QPushButton(captions.at(n));
            connect(button, &QPushButton::clicked, this, [=](){buttonPressed(button);});
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            buttonsLayout->addWidget(button, i, j);
            n++;
        }
    }
    this->setLayout(buttonsLayout);
}
