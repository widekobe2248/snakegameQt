#include "snakebody.h"

snakebody::snakebody(QPointF pos) : QGraphicsItem()
{
    setPos(mapToParent(pos));
}

QRectF snakebody::boundingRect() const
{
    return QRect(0,0,10,10);
}

//Draws snakebody
void snakebody::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::black);

    //basic Collision detection
    //Not really needed but will have
    if(scene()->collidingItems(this).isEmpty()){
        //No Collision
    } else {
        //Collision detected

    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}

//Needed for overload but does not need to do anything
void snakebody::advance(int phase)
{

}
