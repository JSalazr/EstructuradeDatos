#include "grafo.h"

Grafo::Grafo(){
    tam=0;
}
void Grafo::addNodo(Nodo* nodo){
    arreglo[tam]=nodo;
    tam++;
}

void Grafo::ordenar(){
    int cantNodos=tam;
    int fas=1;
    while(cantNodos>0){
        for(int x=0; x<tam; x++){
            if(arreglo[x]->getFase()==-1 && !arreglo[x]->revisarFase(fas)){
                arreglo[x]->setFase(fas);
                cantNodos--;
            }
        }
        fas++;
    }
}

void Grafo::print(){
    for(int cont=0; cont<tam; cont++){
        cout<<arreglo[cont]->getNombre()<< " - "<<arreglo[cont]->getFase()<<endl;
    }
}
