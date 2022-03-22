#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <snakebody.h>
#include <berry.h>
#include <random>
class SnakeHead : public QGraphicsItem
{
public:
    SnakeHead();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //Handles changing the direction variable
    void changeDir(int dir) {
        direction = dir;
    }
    //Adds new body to the body vector
    void addBody(QPointF pos) {
        snakebody *newBody = new snakebody(pos);
        scene()->addItem(newBody);
        body.insert(0,newBody);
        //body.append(newBody);

    }
    int score = 0;
    int getDir();
    bool getColl();
    bool crashed;
    void newBerry();

protected:
    void advance(int phase);

private:
    QVector<snakebody *> body;
    int direction;
    int speed;
};

#endif // SNAKEHEAD_H
