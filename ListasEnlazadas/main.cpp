#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    int valor;
    Nodo *next;
    Nodo(int valor){
        this->valor=valor;
    }
};

Nodo* first;
Nodo* last;

bool agregar(int valor){
    if(first==NULL){
        first = new Nodo(valor);
        last=first;
        return true;
    }
    else{
        last->next=new Nodo(valor);
        last=last->next;
        return true;
    }
    return false;
}

Nodo* buscar(int valor){
    Nodo* actual=first;
    while(actual!=NULL){
        if(actual->valor==valor)
            return actual;
        else
            actual=actual->next;
    }
    return NULL;
}

bool eliminar(int valor){
    Nodo* actual=first;
    if(actual->valor==valor)
        first=actual->next;
    while(actual!=NULL){
        if(actual->next!=NULL && actual->next->valor==valor){
            Nodo* temp=actual->next->next;
            actual->next->valor=NULL;
            actual->next->next=NULL;
            actual->next=temp;
            return true;
        }
        else
            actual=actual->next;
    }
    return false;
}

bool insertar(int valor, int despuesDe){
    Nodo* actual=first;
    Nodo* nuevo=new Nodo(valor);
    while(actual!=NULL){
        if(actual->valor==despuesDe){
            nuevo->next=actual->next;
            actual->next=nuevo;
            return true;
        }
        else
            actual=actual->next;
    }
    return agregar(valor);
}

void imprimir(){
    Nodo* actual=first;
    while(actual!=NULL){
        cout<<actual->valor<<endl;
        actual=actual->next;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opc;
    int valor;
    while(true){
        cout<<"1-Agregar"<<endl;
        cout<<"2-Buscar"<<endl;
        cout<<"3-Eliminar"<<endl;
        cout<<"4-Insertar"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                cin>>valor;
                agregar(valor); break;
            case 2:
                cin>>valor;
                cout<<buscar(valor)->valor<<endl; break;
            case 3:
                cin>>valor;
                eliminar(valor); break;
            case 4:
                int pos;
                cin>>valor;
                cin>>pos;
                insertar(valor, pos); break;
            case 5:
                imprimir(); break;
        }
    }

    return a.exec();
}
