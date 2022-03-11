#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "snakegame.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   hide();
   SnakeGame *w = new SnakeGame(1,2,this);
   w->show();

}

