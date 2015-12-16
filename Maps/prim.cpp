#include "prim.h"
#include <limits>

Prim::Prim(Nodo* ciudades[54])
{
    for(int cont=0; cont<54; cont++){
        ciudadesD[cont]=new TablaD(ciudades[cont]);
        cout<<ciudades[cont]->ciudad.toUtf8().constData();
        Arista* temp=ciudades[cont]->adj;
        while(temp!=NULL){
            cout<<temp->nodoAdj->ciudad.toUtf8().constData();
            temp=temp->sig;
        }
        cout<<endl;
    }
}

void Prim::resolverD(int nodo){
    ciudadesD[nodo]->costo=0;
    while(nodo!=-1){
        Arista* temp=ciudadesD[nodo]->nodo->adj;
        while(temp!=NULL){
            if(ciudadesD[nodo]->visitado==false){
                cout<<ciudadesD[temp->nodoAdj->valor]->costo<<"   "<<temp->peso+ciudadesD[nodo]->costo<< endl;
                if(ciudadesD[temp->nodoAdj->valor]->costo>temp->peso){
                    ciudadesD[temp->nodoAdj->valor]->costo=temp->peso;
                    ciudadesD[temp->nodoAdj->valor]->path=ciudadesD[nodo]->nodo->valor;
                }
            }
            temp=temp->sig;
        }
        ciudadesD[nodo]->visitado=true;
        nodo=visitados();
    }
}

int Prim:: visitados(){
    int menor=-1;
    for(int cont=0; cont<54; cont++){
        if(ciudadesD[cont]->visitado==false){
            if(ciudadesD[cont]->costo!=std::numeric_limits<double>::max() && (menor==-1 || ciudadesD[cont]->costo<menor))
                menor=cont;
        }
    }
    return menor;
}

int Prim::buscar(QString ciudad){
    for(int cont=0; cont<54; cont++){
        if(QString::compare(ciudad, ciudadesD[cont]->nodo->ciudad, Qt::CaseInsensitive)==0){
            return cont;
        }
    }
    return -1;
}

