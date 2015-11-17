#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include "arboles.h"
#include "rect2.h"
#include <QQueue>
#include "score.h"
#include <QLabel>
#include "siguientes.h"
#include "log.h"
#include <QStack>

class Game
{
public:
    int cantjuegos;
    static int arreglo[20];
    Score *puntos;
    Siguientes *sig1, *sig2, *sig3;
    QStack<Log*> log;
    QStack<Log*> juegos;
    Log* juego[3];
    Arboles *arr[3];
    Log *logs[10];
    rect2 *siguientes[3];
    QQueue<Arboles*>arboles;
    QGraphicsScene *scene;
    QGraphicsView *view;
    int filaAlta;
    Game();
    void elim(int fila);
    void mover(int fila);
    void printPuntaje();
    void llenarArboles();
    void gameOver();
};

#endif // GAME_H
