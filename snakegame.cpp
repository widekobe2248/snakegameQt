#include "snakegame.h"
#include "ui_snakegame.h"
#include "snakehead.h"
#include "berry.h"
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
    SnakeHead *play1 = new SnakeHead();
    play1->setZValue(10);



    //Randomize berry spots to start and potentially have setting for different amount in play at once
    Berry *berry = new Berry(StartX1,StartY1);
    scene->addItem(berry);

    Berry *berry2 = new Berry(StartX2,StartY2);
    scene->addItem(berry2);


    //Adds the
    scene->addItem(play1);

    //Sets the player 1/2 reference objects for game to access functions
    player1 = play1;



}


//Stops the game (AKA stops timer)
void SnakeGame::StopGame(){
    if(player1->getColl()) {
        timer->stop();
    }
}

//Handles key presses
void SnakeGame::keyPressEvent(QKeyEvent *event)
{
    //Handes
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

    //Pressed Space starts the game
    //Could easily set it to one of the input keys and just have a boolean we can set and check
    //Need to TURN OFF AFTER FIRST START
    if(event->key() == Qt::Key_Space){
        timer = new QTimer(this);

        //Runs the advance function in snakehead
        connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));

        //Checks the stopGame condition every iteration
        connect(timer, SIGNAL(timeout()), this, SLOT(StopGame()));

        connect(timer, SIGNAL(timeout()), this, SLOT(trackScore()));



        //Effects speed need to compare it to settings
        //Lower means faster
        timer->start(25);
    }

}

int SnakeGame::trackScore()
{
    QString baseTxt1 = "Player 1 Score: ";
    QString score1 = QString::number(player1->score);
    ui->label->setText(baseTxt1 + score1);
    return 0;
}
