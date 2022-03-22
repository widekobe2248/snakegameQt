#include "snakehead.h"

SnakeHead::SnakeHead() : QGraphicsItem()
{
    direction = 1;
    speed = 10;
    crashed = false;
    srand(time(NULL));

    int srandx = rand() % (70);
    int srandy = rand() % (40);

    int StartX = srandx * 10;
    int StartY = srandy * 10;

    setPos(mapToParent(StartX,StartY));

}


QRectF SnakeHead::boundingRect() const
{
    return QRect(0,0,10,10);
}

//Draws SnakeHead
void SnakeHead::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::green);

    //basic Collision detection

    if(scene()->collidingItems(this).isEmpty()){
        //No Collision
    } else {
        //Collision detected
    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}


//Advance function that runs every timer
void SnakeHead::advance(int phase)
{
    QPointF prevPos = mapToParent(0,0);
    bool berryPickup = false;

    if(!phase) return;

    //NEED THIS TO STOP SEG FAULT
    int tempdir = getDir();


    //Need to compare to current direction so you cannot go backwards into yourself
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

    //Checks and handles all colliding items
    if(scene()->collidingItems(this).isEmpty()) {

    }
    else {
        QList<QGraphicsItem *> list = scene()->collidingItems(this);


        //Detects outside of box here
        QPointF point = mapToParent(-(boundingRect().width()-10), -(boundingRect().width()-10));
        QPointF point2 = mapToParent((boundingRect().width()), (boundingRect().width()));
        if(!scene()->sceneRect().contains(point2)) {

            crashed = true;
        }
        if(!scene()->sceneRect().contains(point)) {

            crashed = true;
        }

        //Detect if berry or box
        foreach(QGraphicsItem * i, list){
            snakebody * body= dynamic_cast<snakebody *>(i);
            Berry * berry= dynamic_cast<Berry *>(i);
            if (body)
            {
                crashed = true;
            }

            if (berry) {
                score += 1;
                //Berry Pickup
                addBody(prevPos);
                scene()->removeItem(berry);
                //Generate a new berry
                newBerry();

            }

        }



    }

    //Handles all the body pieces moving

    //Move All BodyPieces
    if(berryPickup){
        //Update all body pieces except one behind head
        //I think this is not needed..... but it works right now so screw it
    } else {
        if(body.length() == 1)
        {
            body[0]->setPos(prevPos);
        }
        else if(body.length() != 0) {
            for(int i = body.length() -1; i > 0; i--) {
                QPointF newPoint = body[i-1]->pos();
                body[i]->setPos(newPoint);
            }
            body[0]->setPos(prevPos);
        }
        //Update all body pieces including one behind head
    }


}

//Returns if crashed
bool SnakeHead::getColl() {
    return crashed;
}

//Generates and places a new berry item when called
void SnakeHead::newBerry()
{
    bool flag = true;
    while(flag) {
        srand(time(NULL));
        int rand_x = rand()%(70);
        int rand_y = rand()%(40);

        int x_pos = rand_x * 10;
        int y_pos = rand_y * 10;


        //See if spot is empty andif not keep running

        Berry *newBerry = new Berry(x_pos,y_pos);
        scene()->addItem(newBerry);


        flag = false;
        break;

    }
}


int SnakeHead::getDir()
{
    return direction;
}




