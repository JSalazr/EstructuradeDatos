#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include "tablad.h"
#include "nodo.h"

class Dijkstra
{
public:
    TablaD *ciudadesD[54];
    Dijkstra(Nodo* ciudades[54]);
    void resolverD(int nodo);
    int visitados();
    int buscar(QString ciudad);
};

#endif // DIJKSTRA_H
