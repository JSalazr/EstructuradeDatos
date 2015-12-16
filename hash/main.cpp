#include <QCoreApplication>

#include <iostream>
#include "nodo.h"

using namespace std;

Nodo* table[200];

Nodo* raices[200][2];

int hashFunction(string palabra){
    int pos=0;
    for(int cont=0; cont<palabra.size();cont++){
        pos=pos+palabra[cont];
    }
    return pos%200;
}

void agregar(int pos, string palabra){
    if(table[pos]==NULL){
        table[pos]=new Nodo(palabra);
        raices[pos][0]=table[pos];
        raices[pos][1]=table[pos];
    }
    else{
        raices[pos][1]->next=new Nodo(palabra);
        raices[pos][1]=raices[pos][1]->next;
    }
}

void print(){
    for(int cont=0; cont<200; cont++){
        Nodo* temp=table[cont];
        while(temp!=NULL){
            cout<<temp->palabra<<endl;
            temp=temp->next;
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num;
    int opc;
    string pal;
    while(opc!=1){
        cin>>pal;
        num=hashFunction(pal);
        agregar(num, pal);
        cout<<num<<endl;
        cin>>opc;
    }
    print();
    return a.exec();
}
