#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    char valor;
    int next;
};

int cont=0;
int disp=0;
const int tam=10;
Nodo arreglo[tam];
int listas[10];

int nextList(){
    for(int cont=0; cont<tam; cont++){
        if(listas[cont]==-1){
            return cont;
        }
    }
    return -1;
}

void crear(char valor){
    if(cont<10){
        int nextDisp=listas[0];
        arreglo[nextDisp].valor=valor;
        listas[0]=arreglo[nextDisp].next;
        arreglo[nextDisp].next=-1;
        listas[nextList()]=nextDisp;
        cont++;
    }
}

void agregar(char valor, int lista){
    if(cont<10){
        int nextDisp=listas[0];
        Nodo* temp=&arreglo[listas[lista]];
        while(temp->next!=-1){
            temp=&arreglo[temp->next];
        }
        temp->next=nextDisp;
        arreglo[nextDisp].valor=valor;
        listas[0]=arreglo[nextDisp].next;
        arreglo[nextDisp].next=-1;
        cont++;
    }
}

int buscar(char valor, int lista){
    Nodo* temp=&arreglo[listas[lista]];
    while(temp->next!=-1){
        if(arreglo[temp->next].valor==valor)
            return temp->next;
        temp=&arreglo[temp->next];
    }
    return false;
}

void insertar(char valor, int lista, char despuesDe){
    if(cont<10){
        int nextDisp=listas[0];
        Nodo* temp=&arreglo[listas[lista]];
        while(temp->next!=-1){
            if(temp->valor==despuesDe){
                arreglo[nextDisp].valor=valor;
                listas[0]=arreglo[nextDisp].next;
                arreglo[nextDisp].next=temp->next;
                temp->next=nextDisp;
                cont++;
            }
            temp=&arreglo[temp->next];
        }
    }
}

void eliminar(char valor, int lista){
    Nodo* temp=&arreglo[listas[lista]];
    if(temp->valor==valor){
        listas[0]=listas[lista];
        listas[lista]=temp->next;
        cont--;
    }
    while(temp->next!=-1){
        if(arreglo[temp->next].valor==valor){
            listas[0]=temp->next;
            temp->next=arreglo[temp->next].next;
            cont--;
        }
        temp=&arreglo[temp->next];
    }
}

void print(int lista){
    Nodo* temp=&arreglo[listas[lista]];
    while(temp->valor!=NULL){
        cout<<temp->valor<<endl;
        temp=&arreglo[temp->next];
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opc;
    char valor;
    int lista;
    char despuesDe;
    for(int cont=0; cont<tam; cont++){
        arreglo[cont].next=cont+1;
    }
    for(int cont=0; cont<10; cont++){
        listas[cont]=-1;
    }
    listas[0]=0;
    arreglo[9].next=-1;

    while(true){
        cout<<"1-Crear"<<endl;
        cout<<"2-Agregar"<<endl;
        cout<<"3-Buscar"<<endl;
        cout<<"4-Eliminar"<<endl;
        cout<<"5-Insertar"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                cin>>valor;
                crear(valor);break;
            case 2:
                cin>>valor;
                cin>>lista;
                agregar(valor,lista);break;
            case 3:
                cin>>valor;
                cin>>lista;
                cout<<buscar(valor, lista)<<endl;break;
            case 4:
                cin>>valor;
                cin>>lista;
                eliminar(valor, lista);break;
            case 5:
                cin>>valor;
                cin>>lista;
                cin>>despuesDe;
                insertar(valor, lista, despuesDe);break;
            case 6:
                cin>>lista;\
                print(lista);
        }
    }
    return a.exec();
}
