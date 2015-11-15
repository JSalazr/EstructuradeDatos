#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include "arboles.h"
#include "rect2.h"
#include <QQueue>

class Game
{
public:
    static int arreglo[20];
    int puntos;
    Arboles *arr[3];
    rect2 *siguientes[3];
    QQueue<Arboles*>arboles;
    QGraphicsScene *scene;
    QGraphicsView *view;
    Game();
    void elim(int fila);
    void mover(int fila);
    void printPuntaje();
    void llenarArboles();
};

#endif // GAME_H
