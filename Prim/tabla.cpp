#include "tabla.h"
#include <limits>

Tabla::Tabla(Nodo* nodo)
{
    this->nodo=nodo;
    costo=std::numeric_limits<int>::max();
    visitado=false;
    path=-1;
}

