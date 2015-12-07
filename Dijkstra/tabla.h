#ifndef TABLA_H
#define TABLA_H
#include "nodo.h"


class Tabla
{
public:
    Nodo* nodo;
    int costo;
    bool visitado;
    int path;
    Tabla(Nodo* nodo);
};

#endif // TABLA_H
