#include "snakegame.h"
#include "ui_snakegame.h"

SnakeGame::SnakeGame(int player_count, int game_speed,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SnakeGame)
{
    ui->setupUi(this);
}

SnakeGame::~SnakeGame()
{
    delete ui;
}
