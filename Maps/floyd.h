#ifndef FLOYD_H
#define FLOYD_H
#include "nodo.h"
#include "arista.h"


class Floyd
{
public:
    double tablaFC[54][54];
    int tablaFP[54][54];
    Floyd(Nodo* ciudades[54]);
    void resolverF();
};

#endif // FLOYD_H
