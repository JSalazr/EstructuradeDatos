#include "tablad.h"
#include <limits>

TablaD::TablaD(Nodo* nodo)
{
    this->nodo=nodo;
    costo=std::numeric_limits<double>::max();
    visitado=false;
    path=-1;
}

