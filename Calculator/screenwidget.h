#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H
#include <QVector>
#include <QWidget>
#include <QPushButton>

class ScreenWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ScreenWidget(QWidget *parent = nullptr);

signals:

private:
    void createCommands();
      QVector<QPushButton *> commandButtons;

};

#endif // SCREENWIDGET_H
