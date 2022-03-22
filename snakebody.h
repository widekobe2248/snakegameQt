#ifndef SNAKEBODY_H
#define SNAKEBODY_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class snakebody : public QGraphicsItem
{
public:
    snakebody(QPointF pos);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void advance(int phase);
};

#endif // SNAKEBODY_H
