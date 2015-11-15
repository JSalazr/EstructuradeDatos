#include "game.h"
#include <QGraphicsScene>
#include "rect1.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <queue>


Game::Game()
{
    puntos=0;
    scene = new QGraphicsScene();
    QString puntaje=""+puntaje;
    llenarArboles();
    Arboles *temp=arboles.dequeue();
    rect1* rect = new rect1(temp->resp);

    for(int cont=0; cont<3; cont++){
        arr[cont]=arboles.dequeue();
        rect2 *temp=new rect2(arr[cont]->resp, 3-cont);
        siguientes[cont]=temp;
        scene->addItem(siguientes[cont]);
    }

    scene->addItem(rect);

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
        QGraphicsItem* item=scene->itemAt(cont*30+20, fila*30+20, QTransform());
        if(item!=0){
            delete item;
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
        if(lista[cont]->pos().y()<fila*30){
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

