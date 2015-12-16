#ifndef KRUSKAL_H
#define KRUSKAL_H
#include "nodo.h"
#include "arista.h"
#include "uniones.h"

#include <iostream>

using namespace std;


class Kruskal
{
public:
    Uniones* uniones[200];
    int unions;
    int tablaK[54][2];

    bool buscar(Nodo* ori, Nodo* dest);
    int find(int num);
    void resolver();
    Kruskal(Nodo* tabla[54]);
};

#endif // KRUSKAL_H
