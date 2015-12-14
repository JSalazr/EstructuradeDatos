#include "nodo.h"
#include "arista.h"
#include <iostream>

using namespace std;

Arista* last;

Nodo::Nodo(QString ciudad, int valor)
{
    this->ciudad=ciudad;
    this->valor=valor;
    adj=NULL;
}

void Nodo::agregarArista(Arista *arista)
{
    if(adj==NULL){
        adj=arista;
        last=arista;
    }
    else{
        last->sig=arista;
        last=last->sig;
   }
}
