#include "snakegame.h"
#include "ui_snakegame.h"
#include "snakehead.h"
#include "berry.h"
#include <QMessageBox>
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


//Initalizes the game
void SnakeGame::showEvent(QShowEvent *event) {
    //randomize starting positions
    srand(time(NULL));
    int srandx1 = rand() % (70);
    int srandy1 = rand() % (40);
    int StartX1 = srandx1 * 10;
    int StartY1 = srandy1 * 10;
    int srandx2 = rand() % (70);
    int srandy2 = rand() % (40);
    int StartX2 = srandx2 *10;
    int StartY2 = srandy2 *10;

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

    //Check if 1 or two player and generate two random spots for both players
    Sleep(1000);
    SnakeHead *play1 = new SnakeHead();
    Sleep(1000);
    SnakeHead *play2 = new SnakeHead();
    play1->setZValue(10);
    play2->setZValue(10);



    //Randomize berry spots to start and potentially have setting for different amount in play at once
    Berry *berry = new Berry(StartX1,StartY1);
    scene->addItem(berry);

    Berry *berry2 = new Berry(StartX2,StartY2);
    scene->addItem(berry2);


    //Adds the
    if(players == 1){
        scene->addItem(play1);
    } else{
        scene->addItem(play1);
        scene->addItem(play2);
    }


    //Sets the player 1/2 reference objects for game to access functions
    player1 = play1;
    player2 = play2;





}


//Stops the game (AKA stops timer)
void SnakeGame::StopGame(){
    if(player1->getColl()) {
        timer->stop();
        popUp();
    }
    if(player2->getColl()) {
        timer->stop();
        popUp();
    }

}

void SnakeGame::popUp(){
    QMessageBox::StandardButton endgame;
    if(players == 2){
        if(player1->score > player2->score){
            QString text = "Player 1 wins with Score:" + QString::number(player1->score);
            QMessageBox::question(this, "GameOver!", text, QMessageBox::Close);
        }
        if(player1->score < player2->score){
            QString text = "Player 2 wins with Score:" + QString::number(player2->score);
            QMessageBox::question(this, "GameOver!", text, QMessageBox::Close);
        }
        if(player1->score == player2->score){
            QString text = "Tie with Score:" + QString::number(player1->score);
            QMessageBox::question(this, "GameOver!", text, QMessageBox::Close);
        }
    } else {
        QString text = "You Scored:" + QString::number(player1->score);
        QMessageBox::question(this, "GameOver!", text, QMessageBox::Close);
    }
    qApp->quit();
}

//Handles key presses
void SnakeGame::keyPressEvent(QKeyEvent *event)
{
    //Handles key presses
    if(event->key() == Qt::Key_W) {
        player1->changeDir(1);
    }

    if(event->key() == Qt::Key_D) {
        player1->changeDir(2);
    }

    if(event->key() == Qt::Key_S) {
        player1->changeDir(3);
    }

    if(event->key() == Qt::Key_A) {
        player1->changeDir(4);
    }

    if(event->key() == Qt::Key_I) {
        player2->changeDir(1);
    }

    if(event->key() == Qt::Key_L) {
        player2->changeDir(2);
    }

    if(event->key() == Qt::Key_K) {
        player2->changeDir(3);
    }

    if(event->key() == Qt::Key_J) {
        player2->changeDir(4);
    }

    //Pressed Space starts the game
    if(started == false){
    if(event->key() == Qt::Key_Space){
        timer = new QTimer(this);

        //Runs the advance function in snakehead
        connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));

        //Checks the stopGame condition every iteration
        connect(timer, SIGNAL(timeout()), this, SLOT(StopGame()));

        connect(timer, SIGNAL(timeout()), this, SLOT(trackScore()));



        //Effects speed need to compare it to settings
        //Lower means faster
        timer->start(speed);
        started = true;
    }
    }

}

int SnakeGame::trackScore()
{
    QString baseTxt1 = "Player 1 Score: ";
    QString baseTxt2 = "Player 2 Score: ";
    QString score1 = QString::number(player1->score);
    QString score2 = QString::number(player2->score);
    ui->label->setText(baseTxt1 + score1);
    ui->label_2->setText(baseTxt2 + score2);
    return 0;
}
