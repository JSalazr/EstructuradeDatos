#ifndef ARISTA_H
#define ARISTA_H

#include "nodo.h"
class Nodo;
class Arista
{
public:
    int peso;
    Nodo* nodoAdj;
    Arista* sig;
    Arista(Nodo* nodo, int peso);
};

#endif // ARISTA_H
