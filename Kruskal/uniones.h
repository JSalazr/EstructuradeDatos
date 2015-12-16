#ifndef UNIONES_H
#define UNIONES_H
#include "nodo.h"
#include "arista.h"


class Uniones
{
public:
    Arista* arista;
    Nodo* origen;
    Nodo* destino;
    Uniones(Arista* arista, Nodo* origen, Nodo* destino);
};

#endif // UNIONES_H
