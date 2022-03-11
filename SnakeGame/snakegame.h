#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <QMainWindow>

namespace Ui {
class SnakeGame;
}

class SnakeGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit SnakeGame(int player_count, int game_speed, QWidget *parent = nullptr);
    ~SnakeGame();

private:
    Ui::SnakeGame *ui;
};

#endif // SNAKEGAME_H
