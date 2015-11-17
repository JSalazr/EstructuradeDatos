#include "game.h"
#include <QGraphicsScene>
#include "rect1.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <queue>
#include "area.h"
#include <typeinfo>
#include <string>
#include <iostream>
#include <log.h>
#include <QDebug>

using namespace::std;

Game::Game()
{
    cantjuegos=0;
    puntos=new Score();
    scene = new QGraphicsScene();
    QString puntaje=""+puntaje;
    llenarArboles();
    filaAlta=0;
    Arboles *temp=arboles.dequeue();
    Area* area=new Area();
    scene->addItem(area);
    rect1* rect = new rect1(temp->resp);

    for(int cont=0; cont<3; cont++){
        arr[cont]=arboles.dequeue();
        rect2 *temp=new rect2(arr[cont]->resp, 3-cont);
        siguientes[cont]=temp;
        scene->addItem(siguientes[cont]);
    }

    for(int cont=0; cont<3; cont++){
        juego[cont]=new Log();
        scene->addItem(juego[cont]);
        juego[cont]->setPos(310, 250+cont*20);
    }

    for(int cont=0; cont<10; cont++){
        logs[cont]=new Log();
        scene->addItem(logs[cont]);
        logs[cont]->setPos(310, 450+25*(5-cont));
    }

    sig1=new Siguientes();
    sig1->actualizar(QString::fromLatin1(arr[0]->arr));
    scene->addItem(sig1);
    sig1->setPos(520, 50*3);

    sig2=new Siguientes();
    sig2->actualizar(QString::fromLatin1(arr[1]->arr));
    scene->addItem(sig2);
    sig2->setPos(520, 50*2);

    sig3=new Siguientes();
    sig3->actualizar(QString::fromLatin1(arr[2]->arr));
    scene->addItem(sig3);
    sig3->setPos(520, 50*1);

    scene->addItem(rect);
    scene->addItem(puntos);
    puntos->setPos(310, 10);

    rect->setFlag(QGraphicsItem :: ItemIsFocusable);
    rect->setFocus();

    view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(603,603);
    scene->setSceneRect(0, 0, 603, 603);
}

void Game::elim(int fila)
{
    for(int cont=0; cont<10; cont++){
        QGraphicsItem *item=scene->itemAt(cont*30+20, fila*30+20, QTransform());
        if(item!=0){
            scene->removeItem(item);
            delete scene->itemAt(cont*30+20, fila*30+20, QTransform());
        }
    }
    for(int cont=fila; cont>0; cont--){
        arreglo[cont]=arreglo[cont-1];
    }
    mover(fila);
}

void Game::mover(int fila)
{
    QList<QGraphicsItem*> lista=scene->items();
    for(int cont=0; cont<lista.size(); cont++){
        if(typeid(*lista[cont])==typeid(rect1) && lista[cont]->pos().y()<fila*30){
            qDebug()<<lista[cont]->pos().y();
            lista[cont]->setPos(lista[cont]->pos().x(), lista[cont]->pos().y()+30);
        }
    }
}

void Game::llenarArboles()
{
    while(arboles.isEmpty() || arboles.size()<20){
        Arboles *a=new Arboles();
        a->armar();
        a->resolver();
        if(a->resp<=10 && a->resp>0)
            arboles.enqueue(a);
    }
}

void Game::gameOver(){
    cantjuegos++;
    QList<QGraphicsItem*> lista=scene->items();
    juegos.push(juego[2]);
    for(int cont=2; cont>0; cont--){
        juego[cont]->actualizar(juego[cont-1]->texto);
    }
    juego[0]->actualizar(QString("Puntuacion ") +QString::number(cantjuegos) +QString(": ")+ QString::number(puntos->getScore()));
    for(int cont=0; cont<lista.size(); cont++){
        if(typeid(*lista[cont])==typeid(rect1)){
            delete lista[cont];
        }
    }
    for(int cont=0; cont<20; cont++){
        arreglo[cont]=0;
    }
    puntos->resetScore();
    llenarArboles();
    Arboles *temp=arboles.dequeue();
    rect1* rect = new rect1(temp->resp);
    rect->setFlag(QGraphicsItem :: ItemIsFocusable);
    rect->setFocus();

    scene->addItem(rect);
}

