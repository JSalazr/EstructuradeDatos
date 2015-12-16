#include <QCoreApplication>
#include "uniones.h"
#include "nodo.h"
#include "arista.h"

#include <iostream>

using namespace std;

Nodo* tabla[8];
Uniones* uniones[50];
int unions;

int tablaK[8][2];

bool buscar(Nodo* ori, Nodo* dest){
    for(int cont=0; cont<unions; cont++){
        if((ori==uniones[cont]->destino || ori==uniones[cont]->origen) &&
                (dest==uniones[cont]->destino || dest==uniones[cont]->origen))
           return false;
    }
    return true;
}

void crear(){
    tabla[0]=new Nodo(0);
    tabla[1]=new Nodo(1);
    tabla[2]=new Nodo(2);
    tabla[3]=new Nodo(3);
    tabla[4]=new Nodo(4);
    tabla[5]=new Nodo(5);
    tabla[6]=new Nodo(6);
    tabla[7]=new Nodo(7);

    tabla[0]->agregarArista(new Arista(tabla[1], 7));
    tabla[0]->agregarArista(new Arista(tabla[2], 3));
    tabla[0]->agregarArista(new Arista(tabla[3], 1));

    tabla[1]->agregarArista(new Arista(tabla[0], 7));
    tabla[1]->agregarArista(new Arista(tabla[2], 1));
    tabla[1]->agregarArista(new Arista(tabla[3], 1));
    tabla[1]->agregarArista(new Arista(tabla[6], 8));

    tabla[2]->agregarArista(new Arista(tabla[0], 3));
    tabla[2]->agregarArista(new Arista(tabla[1], 1));

    tabla[3]->agregarArista(new Arista(tabla[0], 1));
    tabla[3]->agregarArista(new Arista(tabla[1], 1));
    tabla[3]->agregarArista(new Arista(tabla[5], 5));

    tabla[4]->agregarArista(new Arista(tabla[6], 2));
    tabla[4]->agregarArista(new Arista(tabla[7], 4));

    tabla[5]->agregarArista(new Arista(tabla[3], 5));

    tabla[6]->agregarArista(new Arista(tabla[1], 8));
    tabla[6]->agregarArista(new Arista(tabla[4], 2));

    tabla[7]->agregarArista(new Arista(tabla[4], 4));

    for(int cont=0; cont<8; cont++){
        Arista* temp=tabla[cont]->adj;
        while(temp!=NULL){
            if(buscar(tabla[cont], temp->nodoAdj)){
               uniones[unions]=new Uniones(temp, tabla[cont], temp->nodoAdj);
               unions++;
            }
            temp=temp->sig;
        }
    }

    for(int cont=0; cont<8; cont++){
        tablaK[cont][0]=cont;
        tablaK[cont][1]=-1;
    }
}

int find(int num){
    int num1=num;
    while(tablaK[num][1]>=0){
        num=tablaK[num][1];
        if(num>=0){
            num1=num;
        }
    }
    return num1;
}

void resolver(){
    Uniones* uniones2[unions];
    for(int cont=0; cont<unions; cont++){
        uniones2[cont]=NULL;
    }
    int pos;
    for(int cont=0; cont<unions; cont++){
        pos=0;
        for(int cont2=0; cont2<unions; cont2++){
            if(uniones[cont]->arista->peso>uniones[cont2]->arista->peso){
                pos++;
            }
        }
        while(uniones2[pos]!=NULL){
            pos++;
        }
        uniones2[pos]=new Uniones(uniones[cont]->arista,uniones[cont]->origen,
                                  uniones[cont]->destino);
    }
    for(int cont=0; cont<unions; cont++){
        cout<<uniones2[cont]->origen->valor<<uniones2[cont]->arista->peso<<uniones2[cont]->destino->valor<<endl;
    }

    for(int cont=0; cont<unions; cont++){

        int ori=uniones2[cont]->origen->valor;
        int desti=uniones2[cont]->destino->valor;
        if(find(ori)!=find(desti)){
            tablaK[find(desti)][1]=tablaK[find(desti)][1]+
                    tablaK[find(ori)][1];
            tablaK[find(ori)][1]=find(desti);
        }
    }

    for(int cont=0; cont<8; cont++){
        cout<<tablaK[cont][0]<<"  "<<tablaK[cont][1]<<endl;
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    crear();
    resolver();
    return a.exec();
}
