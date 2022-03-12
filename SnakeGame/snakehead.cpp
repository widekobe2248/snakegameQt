#include "snakehead.h"

SnakeHead::SnakeHead() : QGraphicsItem()
{
    direction = 1;
    speed = 10;


    int StartX = 200;
    int StartY = 200;

    setPos(mapToParent(StartX,StartY));

}


QRectF SnakeHead::boundingRect() const
{
    return QRect(0,0,10,10);
}

void SnakeHead::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::green);

    //basic Collision detection

    if(scene()->collidingItems(this).isEmpty()){
        //No Collision
    } else {
        //Collision detected
        DoCollision();
    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}



void SnakeHead::advance(int phase)
{
    if(!phase) return;
    QPointF location = this->pos();

    int tempdir = getDir();

    if(tempdir == 1){
        setPos(mapToParent(0,-speed));
    }
    else if(tempdir == 2){
        setPos(mapToParent(speed,0));
    }
    else if(tempdir == 3){
        setPos(mapToParent(0,speed));
    }
    else if(tempdir ==4){
        setPos(mapToParent(-speed,0));
    }


}



int SnakeHead::getDir()
{
    return direction;
}

void SnakeHead::DoCollision()
{
    //Handle Collision Event here
    //Will pause game and such or popup with score
    //And such
}
