#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "snakegame.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//TODO
//Read the settings and parse the interface

void MainWindow::on_pushButton_clicked()
{
   hide();
   //Starts the game window with settings in the constructors




   ui->radioButton->isEnabled();
   SnakeGame *w = new SnakeGame(player_count,speed,this);
   w->show();

}


void MainWindow::on_radioButton_clicked()
{
    player_count = 1;
}

void MainWindow::on_radioButton_2_clicked()
{
    player_count = 2;
}

void MainWindow::on_radioButton_3_clicked()
{
    speed = 150;
}

void MainWindow::on_radioButton_4_clicked()
{
    speed = 100;
}

void MainWindow::on_radioButton_5_clicked()
{
    speed = 50;
}
