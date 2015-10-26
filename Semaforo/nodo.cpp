#include "nodo.h"

Nodo::Nodo(string nom){
    nombre=nom;
    tam=0;
    fase=-1;
}

int Nodo::getTam(){
    return tam;
}

int Nodo::getFase(){
    return fase;
}

string Nodo::getNombre(){
    return nombre;
}

void Nodo::setFase(int fas){
    fase=fas;
}

void Nodo::addArista(Nodo* nodo){
    aristas[tam]=nodo;
    tam++;
}

bool Nodo::revisarFase(int fase){
    for(int y=0; y<tam; y++){
        if(aristas[y]->fase==fase)
            return true;
    }
    return false;
}
