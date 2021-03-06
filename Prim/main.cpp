#include <QCoreApplication>
#include "tabla.h"
#include "nodo.h"
#include "arista.h"
#include <limits>

#include <iostream>

using namespace std;


int cant=8;
Tabla* tabla[8];

void crear(){
    tabla[0]=new Tabla(new Nodo(0));
    tabla[1]=new Tabla(new Nodo(1));
    tabla[2]=new Tabla(new Nodo(2));
    tabla[3]=new Tabla(new Nodo(3));
    tabla[4]=new Tabla(new Nodo(4));
    tabla[5]=new Tabla(new Nodo(5));
    tabla[6]=new Tabla(new Nodo(6));
    tabla[7]=new Tabla(new Nodo(7));

    tabla[0]->nodo->agregarArista(new Arista(tabla[3]->nodo, 6));

    tabla[1]->nodo->agregarArista(new Arista(tabla[2]->nodo, 4));
    tabla[1]->nodo->agregarArista(new Arista(tabla[6]->nodo, 5));

    tabla[2]->nodo->agregarArista(new Arista(tabla[1]->nodo, 4));
    tabla[2]->nodo->agregarArista(new Arista(tabla[4]->nodo, 3));

    tabla[3]->nodo->agregarArista(new Arista(tabla[0]->nodo, 6));
    tabla[3]->nodo->agregarArista(new Arista(tabla[7]->nodo, 6));;

    tabla[4]->nodo->agregarArista(new Arista(tabla[2]->nodo, 3));
    tabla[4]->nodo->agregarArista(new Arista(tabla[7]->nodo, 6));

    tabla[5]->nodo->agregarArista(new Arista(tabla[7]->nodo, 2));

    tabla[6]->nodo->agregarArista(new Arista(tabla[1]->nodo, 5));
    tabla[6]->nodo->agregarArista(new Arista(tabla[7]->nodo, 3));

    tabla[7]->nodo->agregarArista(new Arista(tabla[3]->nodo, 6));
    tabla[7]->nodo->agregarArista(new Arista(tabla[4]->nodo, 6));
    tabla[7]->nodo->agregarArista(new Arista(tabla[5]->nodo, 2));
    tabla[7]->nodo->agregarArista(new Arista(tabla[6]->nodo, 3));
}

int visitados(){
    int menor=-1;
    for(int cont=0; cont<8; cont++){
        if(tabla[cont]->visitado==false){
            if(menor==-1 || tabla[cont]->costo<menor)
                menor=cont;
        }
    }
    return menor;
}

void dijkstra(int nodo){
    tabla[nodo]->costo=0;
    while(nodo!=-1){
        Arista* temp=tabla[nodo]->nodo->adj;
        while(temp!=NULL){
            if(tabla[nodo]->visitado==false){
                if(tabla[temp->nodoAdj->valor]->costo>temp->peso){
                    tabla[temp->nodoAdj->valor]->costo=temp->peso;
                    tabla[temp->nodoAdj->valor]->path=tabla[nodo]->nodo->valor;
                }
            }
            temp=temp->sig;
        }
        tabla[nodo]->visitado=true;
        nodo=visitados();
    }
}

void print(){
    for(int cont=0;cont<8; cont++){
        cout<<tabla[cont]->nodo->valor<< " - ";
        cout<<tabla[cont]->costo<<" - ";
        cout<<tabla[cont]->path<<endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    crear();
    dijkstra(2);
    print();
    return a.exec();
}
