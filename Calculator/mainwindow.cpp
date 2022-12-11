#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setLayout(new QVBoxLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setKeyboardWidget(QWidget *widget)
{
    ui->centralwidget->layout()->addWidget(widget);
}

void MainWindow::setScreenWidget(QWidget *widget)
{
    ui->centralwidget->layout()->addWidget(widget);
}

