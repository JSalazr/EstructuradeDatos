#include "kruskal.h"

bool Kruskal::buscar(Nodo *ori, Nodo *dest)
{
    for(int cont=0; cont<unions; cont++){
        if((ori==uniones[cont]->destino || ori==uniones[cont]->origen) &&
                (dest==uniones[cont]->destino || dest==uniones[cont]->origen))
           return false;
    }
    return true;
}

int Kruskal::find(int num)
{
    int num1=num;
    while(tablaK[num][1]>=0){
        num=tablaK[num][1];
        if(num>=0){
            num1=num;
        }
    }
    return num1;
}

void Kruskal::resolver()
{
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

Kruskal::Kruskal(Nodo* tabla[54])\
{
    unions=0;
    for(int cont=0; cont<54; cont++){
        Arista* temp=tabla[cont]->adj;
        while(temp!=NULL){
            if(buscar(tabla[cont], temp->nodoAdj)){
               uniones[unions]=new Uniones(temp, tabla[cont], temp->nodoAdj);
               unions++;
            }
            temp=temp->sig;
        }
    }

    for(int cont=0; cont<54; cont++){
        tablaK[cont][0]=cont;
        tablaK[cont][1]=-1;
    }
}

