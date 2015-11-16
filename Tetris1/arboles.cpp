#include "arboles.h"
#include <queue>
#include <QDebug>

Nodo* raiz;

Arboles::Arboles()
{
    for(int cont=0; cont<7; cont++){
        if(cont==1 || cont==3 || cont==5){
            switch(rand() % 3){
                case 0:
                    arr[cont]='+'; break;
                case 1:
                    arr[cont]='-'; break;
                case 2:
                    arr[cont]='*'; break;
            }
        }else{
            arr[cont]=rand() % 5+1;
        }
    }
}

void Arboles::armar(){
    raiz=new Nodo(arr[3]);
    raiz->izq=new Nodo(arr[1]);
    raiz->izq->izq=new Nodo(arr[0]);
    raiz->izq->der=new Nodo(arr[2]);
    raiz->der=new Nodo(arr[5]);
    raiz->der->izq=new Nodo(arr[4]);
    raiz->der->der=new Nodo(arr[6]);

}

void Arboles::resolver(){
    int resp=0;
    int num1;
    int num2;
    num1=raiz->izq->izq->val-'0';
    num2=raiz->izq->der->val-'0';
    resp=ecuacion(raiz->izq->val, num1, num2);
    num1=raiz->der->izq->val-'0';
    num2=raiz->der->der->val-'0';
    resp=ecuacion(raiz->val, resp, ecuacion(raiz->der->val, num1, num2));
    this->resp=resp;
}

int Arboles::ecuacion(char operador, int num1, int num2){
    switch(operador){
        case '+':
            return num1+num2; break;
        case '-':
            return num1-num2; break;
        case '*':
            return num1*num2; break;
    }
    return 0;
}

