#include "arista.h"
#include <iostream>

using namespace std;

Arista::Arista(Nodo* nodo, double peso)
{
    this->nodoAdj=nodo;
    this->peso=peso;
    this->sig=NULL;
}

