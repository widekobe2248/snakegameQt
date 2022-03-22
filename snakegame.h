#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <snakehead.h>
namespace Ui {
class SnakeGame;
}

class SnakeGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit SnakeGame(int player_count, int game_speed, QWidget *parent = nullptr);
    ~SnakeGame();
    SnakeHead *player1;
    SnakeHead *player2;
protected:
    void showEvent(QShowEvent *event);

public slots:
    void StopGame();
    int trackScore();
private:
    int players;
    int speed;
    Ui::SnakeGame *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    void keyPressEvent(QKeyEvent *event);

};

#endif // SNAKEGAME_H
