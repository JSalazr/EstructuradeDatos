#ifndef TABLA_H
#define TABLA_H
#include "nodo.h"


class TablaD
{
public:
    Nodo* nodo;
    double costo;
    bool visitado;
    int path;
    TablaD(Nodo* nodo);
};

#endif // TABLA_H
