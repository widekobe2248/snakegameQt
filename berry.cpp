#include "berry.h"

Berry::Berry(int x, int y) : QGraphicsItem()
{
    int StartX = x;
    int StartY = y;
    setPos(mapToParent(StartX,StartY));
}

QRectF Berry::boundingRect() const
{
    return QRect(0,0,10,10);
}

//Draws Berry
void Berry::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::red);

    //basic Collision detection

    if(scene()->collidingItems(this).isEmpty()){
        //No Collision
    } else {
        //Collision detected

    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}

void Berry::advance(int phase)
{

}
