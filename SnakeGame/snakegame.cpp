#include "snakegame.h"
#include "ui_snakegame.h"
#include "snakehead.h"
SnakeGame::SnakeGame(int player_count, int game_speed,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SnakeGame)
{
    ui->setupUi(this);
    players = player_count;
    speed = game_speed;
}

SnakeGame::~SnakeGame()
{
    delete ui;
}

void SnakeGame::showEvent(QShowEvent *event) {
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(0,0, 700, 400);

    QPen mypen = QPen(Qt::black);
    QPen redpen = QPen(Qt::red);

    QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(), scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

    scene->addLine(TopLine,redpen);
    scene->addLine(LeftLine,redpen);
    scene->addLine(RightLine,redpen);
    scene->addLine(BottomLine,redpen);

    SnakeHead *play1 = new SnakeHead();
    scene->addItem(play1);

    player1 = play1;



}

void SnakeGame::timerEvent(QTimerEvent *event){
    qDebug() << "TIMER EVENT";
}

void SnakeGame::StopGame(){
    //Check SnakeHeads for Colision
    //If true stop the timer and display error messages and such
    // timer->stop();
}

void SnakeGame::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_W) {
        qDebug() << "W KEY PRESSED";
        player1->changeDir(1);
    }

    if(event->key() == Qt::Key_D) {
        qDebug() << "D KEY PRESSED";
        player1->changeDir(2);
    }

    if(event->key() == Qt::Key_S) {
        qDebug() << "S KEY PRESSED";
        player1->changeDir(3);
    }

    if(event->key() == Qt::Key_A) {
        qDebug() << "D KEY PRESSED";
        player1->changeDir(4);
    }
    if(event->key() == Qt::Key_Space){
        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
        connect(timer, SIGNAL(timeout()), this, SLOT(StopGame()));
        //Effects speed
        timer->start(150);
    }

}

