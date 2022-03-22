#ifndef BERRY_H
#define BERRY_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Berry : public QGraphicsItem
{
public:
    Berry(int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int phase);
};

#endif // BERRY_H
