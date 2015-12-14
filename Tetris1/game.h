#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <QImage>
#include "arboles.h"
#include "rect2.h"
#include <QQueue>
#include "score.h"
#include <QLabel>
#include "siguientes.h"
#include "log.h"
#include <QStack>
#include "rect1.h"
#include "nodocola.h"
#include "cola.h"

class Game
{
public:
    int cantjuegos;
    rect1* cubos[200];
    int cantCubos;
    int cantArboles;
    static int arreglo[20];
    Score *puntos;
    Cola* cola=new Cola();
    Siguientes *sig1, *sig2, *sig3;
    QStack<Log*> log;
    QStack<Log*> juegos;
    Log* juego[3];
    NodoCola *arr[3];
    Log *logs[10];
    rect2 *siguientes[3];
    NodoCola *arboles;
    QGraphicsScene *scene;
    QLabel *image;
    QGraphicsView *view;
    int filaAlta;
    Game();
    void elim(int fila);
    void mover(int fila);
    void printPuntaje();
    void llenarArboles();
    void gameOver();
    void eliminarDelArreglo(int pos);
};

#endif // GAME_H
