#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include "arboles.h"
#include "rect2.h"
#include <QQueue>
#include "score.h"
#include <QLabel>

class Game
{
public:
    static int arreglo[20];
    Score *puntos;
    QLabel *sigs[3];
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
