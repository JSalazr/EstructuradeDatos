#include "arista.h"
#include <iostream>

using namespace std;

Arista::Arista(Nodo* nodo, int peso)
{
    this->nodoAdj=nodo;
    this->peso=peso;
    this->sig=NULL;
}

