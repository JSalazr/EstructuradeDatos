#ifndef PRIM_H
#define PRIM_H

#include "nodo.h"
#include "tablad.h"


class Prim
{
public:
    TablaD *ciudadesD[54];
    Prim(Nodo* ciudades[54]);
    void resolverD(int nodo);
    int visitados();
    int buscar(QString ciudad);
};

#endif // PRIM_H
