#include <QCoreApplication>
#include "nodo.h"
#include "arista.h"
#include <iostream>
#include <limits>

using namespace std;

int A[6][6];
int B[6][6];
Nodo* nodos[6];

void crear(){
    nodos[0]=new Nodo(0);
    nodos[1]=new Nodo(1);
    nodos[2]=new Nodo(2);
    nodos[3]=new Nodo(3);
    nodos[4]=new Nodo(4);
    nodos[5]=new Nodo(5);

    nodos[0]->agregarArista(new Arista(nodos[1], 5));
    nodos[0]->agregarArista(new Arista(nodos[2], 2));
    nodos[0]->agregarArista(new Arista(nodos[5], 4));

    nodos[1]->agregarArista(new Arista(nodos[0], 5));
    nodos[1]->agregarArista(new Arista(nodos[3], 6));
    nodos[1]->agregarArista(new Arista(nodos[5], 10));

    nodos[2]->agregarArista(new Arista(nodos[0], 2));
    nodos[2]->agregarArista(new Arista(nodos[3], 7));

    nodos[3]->agregarArista(new Arista(nodos[1], 6));
    nodos[3]->agregarArista(new Arista(nodos[2], 7));
    nodos[3]->agregarArista(new Arista(nodos[4], 3));

    nodos[4]->agregarArista(new Arista(nodos[3], 3));

    nodos[5]->agregarArista(new Arista(nodos[0], 4));
    nodos[5]->agregarArista(new Arista(nodos[1], 10));

    for(int x=0; x<6; x++){
        for(int y=0; y<6; y++){
              A[x][y]=999;
              B[x][y]=-1;
        }
    }

    for(int x=0; x<6; x++){
        Arista* temp=nodos[x]->adj;
        while(temp!=NULL){
            A[x][temp->nodoAdj->valor]=temp->peso;
            B[x][temp->nodoAdj->valor]=nodos[x]->valor;
            temp=temp->sig;
        }
    }
}

void floyd(){
    for(int k=0; k<6; k++){
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(A[i][k]+A[k][j] < A[i][j]){
                    A[i][j]= A[i][k]+A[k][j];
                    B[i][j]=k;
                }
            }
        }
    }
    for(int x=0; x<6; x++){
        A[x][x]=0;
        B[x][x]=-1;
    }
}

void print(){
    for(int x=0; x<6; x++){
        for(int y=0; y<6; y++){
            if(A[x][y]!=999)
              cout<<A[x][y]<< " - ";
            else
              cout<<"INF"<< " - ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int x=0; x<6; x++){
        for(int y=0; y<6; y++){
              cout<<B[x][y]<< " - ";
        }
        cout<<endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    crear();
    floyd();
    print();
    return a.exec();
}
