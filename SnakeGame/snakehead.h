#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class SnakeHead : public QGraphicsItem
{
public:
    SnakeHead();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void changeDir(int dir) {
        direction = dir;
    }
    int getDir();

protected:
    void advance(int phase);

private:
    int direction;
    int speed;

    void DoCollision();
};

#endif // SNAKEHEAD_H
