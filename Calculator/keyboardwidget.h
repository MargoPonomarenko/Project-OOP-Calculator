#ifndef KEYBOARDWIDGET_H
#define KEYBOARDWIDGET_H
#include <QVector>
#include <QWidget>
#include <QPushButton>

class KeyboardWidget : public QWidget
{
    Q_OBJECT
public:
    explicit KeyboardWidget(QWidget *parent = nullptr);

signals:

private slots:
    void buttonPressed(QPushButton *button);

private:
    void configure();
    void createButtons();
    QVector<QPushButton *> buttons;
    const QVector<QString> captions = {"C", "( )", "%", "/",
                                       "7", "8", "9", "*",
                                       "4", "5", "6", "-",
                                       "1", "2", "3", "+",
                                       "+/-", "0", ",", "="};

};

#endif // KEYBOARDWIDGET_H
