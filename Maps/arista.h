#ifndef ARISTA_H
#define ARISTA_H

#include "nodo.h"
class Nodo;
class Arista
{
public:
    double peso;
    Nodo* nodoAdj;
    Arista* sig;
    Arista(Nodo* nodo, double peso);
};

#endif // ARISTA_H
