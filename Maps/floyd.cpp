#include "floyd.h"

Floyd::Floyd(Nodo* ciudades[54])
{
    for(int x=0; x<54; x++){
        for(int y=0; y<54; y++){
              tablaFC[x][y]=999999;
              tablaFP[x][y]=-1;
        }
    }

    for(int x=0; x<54; x++){
        Arista* temp=ciudades[x]->adj;
        while(temp!=NULL){
            tablaFC[x][temp->nodoAdj->valor]=temp->peso;
            tablaFP[x][temp->nodoAdj->valor]=ciudades[x]->valor;
            temp=temp->sig;
        }
    }
}

void Floyd::resolverF(){
        for(int k=0; k<54; k++){
            for(int i=0; i<54; i++){
                for(int j=0; j<54; j++){
                    if(tablaFC[i][k]+tablaFC[k][j] < tablaFC[i][j]){
                        tablaFC[i][j]= tablaFC[i][k]+tablaFC[k][j];
                        tablaFP[i][j]=k;
                    }
                }
            }
        }
        for(int x=0; x<54; x++){
            tablaFC[x][x]=0;
            tablaFP[x][x]=-1;
        }
}
