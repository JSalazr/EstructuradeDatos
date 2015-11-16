#include "rect1.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>
#include "game.h"


extern Game* game;

int Game::arreglo[20];
rect1::rect1(int tam)
{
    this->tam=tam;
    setRect(0, -1, 30*this->tam-1, 30);
    switch(rand()%3+1){
        case 1:
            this->setBrush(Qt::green); break;
        case 2:
            this->setBrush(Qt::red); break;
        case 3:
            this->setBrush(Qt::blue); break;
    }

    timer=new QTimer();
    connect(timer, SIGNAL(timeout()), this,SLOT(move()));
    timer->start(1000);
}

void rect1::move(){
    if(this->y()<570 && soloAbajo())
        setPos(x(),y()+30);
    else{
        this->nuevo();
        fila=pos().y()/30;
        Game::arreglo[fila]+=tam;
        this->clearFocus();
        timer->stop();
        if(Game::arreglo[fila]==tam && tam<10){
            game->filaAlta++;
            for(int cont=9; cont>0; cont--){
                game->logs[cont]->actualizar(game->logs[cont-1]->texto);
            }
            game->logs[0]->actualizar(QString("Fila nueva"));
        }
        if(Game::arreglo[fila]==10){
            game->filaAlta--;
            for(int cont=9; cont>0; cont--){
                game->logs[cont]->actualizar(game->logs[cont-1]->texto);
            }
            game->logs[0]->actualizar(QString("Fila destruida, 10 puntos mas"));
            game->puntos->increase();
            Game::arreglo[fila]=0;
            game->elim(fila);
        }
        if(Game::arreglo[fila]<10 && pos().y()<=0){
            game->gameOver();
        }
    }
}

void rect1::nuevo()
{
    rect1* a=new rect1(game->arr[0]->resp);
    if(game->arboles.empty()){
        game->llenarArboles();
    }
    game->arr[0]=game->arr[1];
    game->arr[1]=game->arr[2];
    game->arr[2]=game->arboles.dequeue();
    game->sig1->actualizar(QString::fromLatin1(game->arr[0]->arr));
    game->sig2->actualizar(QString::fromLatin1(game->arr[1]->arr));
    game->sig3->actualizar(QString::fromLatin1(game->arr[2]->arr));
    for(int cont=0; cont<3; cont++){
        delete game->siguientes[cont];
    }
    for(int cont=0; cont<3; cont++){
        rect2 *temp=new rect2(game->arr[cont]->resp, 3-cont);
        game->siguientes[cont]=temp;
        game->scene->addItem(game->siguientes[cont]);
    }
    scene()->addItem(a);
    a->setFlag(QGraphicsItem::ItemIsFocusable);
    a->setFocus();

}

void rect1::keyPressEvent(QKeyEvent *event)
{
       QList<QGraphicsItem *> collitems=collidingItems();
       if(event->key() == Qt::Key_Left){
           if(pos().x()>0 && scene()->itemAt(x()-20, y()+20, QTransform())==0)
           setPos(x()-30, y());
       }

       else if(event->key() == Qt::Key_Right){
           if(pos().x()+(30*tam)<300 && scene()->itemAt(x()+tam*30+20, y()+20, QTransform())==0)
            setPos(x()+30, y());
       }
       else if(event->key()==Qt::Key_Down){
           if(this->y()<570 && collitems.empty())
               setPos(x(),y()+30);
       }
       else if(event->key()== Qt::Key_Space){
           setRotation(90);
       }
}

bool rect1::soloAbajo(){
    QList<QGraphicsItem *> collitems=collidingItems();
    for(int cont=0; cont<collitems.size(); cont++){
        if(collitems[cont]->pos().y()>pos().y())
            return false;
    }
    return true;
}

