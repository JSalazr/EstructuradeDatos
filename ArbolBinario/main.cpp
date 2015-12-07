#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    int valor;
    Nodo* izq;
    Nodo* der;
    Nodo(int valor){
        this->valor=valor;
        izq=NULL;
        der=NULL;
    }
};

Nodo* raiz;

void agregar(Nodo* nodo, Nodo* temp){
    if(temp==NULL){
        raiz=nodo;
    }else{
        if(temp->valor>nodo->valor){
            if(temp->izq==NULL){
                temp->izq=nodo;
            }
            else{
                agregar(nodo, temp->izq);
            }
        }
        if(temp->valor<nodo->valor){
            if(temp->der==NULL){
                temp->der=nodo;
            }
            else{
                agregar(nodo, temp->der);
            }
        }
    }
}


Nodo* buscar(int valor, Nodo* temp){
    if(temp==NULL){
        return NULL;
    }
    else{
        if(temp->valor==valor){
            return temp;
        }
        if(temp->valor>valor){
            if(temp->izq!=NULL)
                return buscar(valor, temp->izq);
        }
        if(temp->valor<valor){
            if(temp->der!=NULL)
                return buscar(valor, temp->der);
        }
    }
}

void eliminar(int valor, Nodo* temp){
    if(raiz!=NULL){
        if(temp->valor==valor){
            raiz=temp->izq;
            Nodo* t=temp->der;
            agregar(t, raiz);
        }
        if(temp->valor>valor){
            if(temp->izq!=NULL){
                if(temp->izq->valor==valor){
                    Nodo* a=temp->izq->der;
                    temp->izq=temp->izq->izq;
                    if(a!=NULL){
                        agregar(a, raiz);
                    }
                }else
                    eliminar(valor, temp->izq);
            }
        }
        if(temp->valor<valor){
            if(temp->der!=NULL){
                if(temp->der->valor==valor){
                    Nodo* a=temp->der->der;
                    temp->der=temp->der->izq;
                    if(a!=NULL){
                        agregar(a, raiz);
                    }
                }else
                    eliminar(valor, temp->der);
            }
        }
    }
}


void imprimir(Nodo* raiz){
    if(raiz!=NULL){
        cout<<raiz->valor<<endl;
        if(raiz->izq!=NULL)
            imprimir(raiz->izq);
        if(raiz->der!=NULL)
            imprimir(raiz->der);
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
        cin>>opc;
        switch(opc){
            case 1:
                cin>>valor;
                agregar(new Nodo(valor), raiz); break;
            case 2:
                cin>>valor;
                cout<<buscar(valor, raiz)->valor<<endl; break;
            case 3:
                cin>>valor;
                eliminar(valor, raiz); break;
            case 4:
                imprimir(raiz); break;
        }
    }
    return a.exec();
}
