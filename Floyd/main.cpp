#include <QCoreApplication>
#include "nodo.h"
#include "arista.h"
#include <iostream>
#include <limits>

using namespace std;

int A[8][8];
int B[8][8];
Nodo* nodos[8];

void crear(){
    nodos[0]=new Nodo(0);
    nodos[1]=new Nodo(1);
    nodos[2]=new Nodo(2);
    nodos[3]=new Nodo(3);
    nodos[4]=new Nodo(4);
    nodos[5]=new Nodo(5);
    nodos[6]=new Nodo(6);
    nodos[7]=new Nodo(7);

    nodos[0]->agregarArista(new Arista(nodos[3], 2));
    nodos[0]->agregarArista(new Arista(nodos[1], 8));
    nodos[0]->agregarArista(new Arista(nodos[4], 7));

    nodos[1]->agregarArista(new Arista(nodos[0], 8));
    nodos[1]->agregarArista(new Arista(nodos[3], 1));
    nodos[1]->agregarArista(new Arista(nodos[6], 4));

    nodos[2]->agregarArista(new Arista(nodos[5], 1));
    nodos[2]->agregarArista(new Arista(nodos[4], 2));

    nodos[3]->agregarArista(new Arista(nodos[0], 2));
    nodos[3]->agregarArista(new Arista(nodos[1], 1));

    nodos[4]->agregarArista(new Arista(nodos[2], 2));
    nodos[4]->agregarArista(new Arista(nodos[0], 7));
    nodos[4]->agregarArista(new Arista(nodos[7], 9));

    nodos[5]->agregarArista(new Arista(nodos[2], 1));
    nodos[5]->agregarArista(new Arista(nodos[7], 4));

    nodos[6]->agregarArista(new Arista(nodos[1], 4));
    nodos[6]->agregarArista(new Arista(nodos[7], 7));

    nodos[7]->agregarArista(new Arista(nodos[4], 9));
    nodos[7]->agregarArista(new Arista(nodos[5], 4));
    nodos[7]->agregarArista(new Arista(nodos[6], 7));

    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++){
              A[x][y]=999;
              B[x][y]=-1;
        }
    }

    for(int x=0; x<8; x++){
        Arista* temp=nodos[x]->adj;
        while(temp!=NULL){
            A[x][temp->nodoAdj->valor]=temp->peso;
            B[x][temp->nodoAdj->valor]=nodos[x]->valor;
            temp=temp->sig;
        }
    }
}

void floyd(){
    for(int k=0; k<8; k++){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(A[i][k]+A[k][j] < A[i][j]){
                    A[i][j]= A[i][k]+A[k][j];
                    B[i][j]=k;
                }
            }
        }
    }
    for(int x=0; x<8; x++){
        A[x][x]=0;
        B[x][x]=-1;
    }
}

void print(){
    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++){
            if(A[x][y]!=999)
              cout<<A[x][y]<< " - ";
            else
              cout<<"INF"<< " - ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++){
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
