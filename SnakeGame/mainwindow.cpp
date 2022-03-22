#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "snakegame.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white;");
    QPalette pal = ui->pushButton->palette();
    pal.setColor(QPalette::Button, QColor(Qt::blue));
    ui->pushButton->setAutoFillBackground(true);
    ui->pushButton->setPalette(pal);
    ui->pushButton->update();
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
   SnakeGame *w = new SnakeGame(1,2,this);
   w->show();

}


void MainWindow::on_radioButton_clicked()
{

}

void MainWindow::on_radioButton_2_clicked()
{

}

void MainWindow::on_radioButton_3_clicked()
{

}

void MainWindow::on_radioButton_4_clicked()
{

}

void MainWindow::on_radioButton_5_clicked()
{

}
