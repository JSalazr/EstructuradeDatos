#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    int valor;
    int next;
    Nodo(int valor){
        this->valor=valor;
        next=-1;
    }
};

int m=-1;
int n=-1;
int disp=0;
const int tam=10;
Nodo* arreglo[tam];

int nextDisp(){
    for(int cont=0; cont<tam; cont++){
        if(arreglo[cont]->valor==-1){
            disp=cont;
            return disp;
        }
    }
    return -1;
}

bool agregar(int valor, int lista){
    if(disp==-1)
        return false;
    if(lista==-1){
        lista=disp;
        arreglo[disp]->valor=valor;
        arreglo[disp]->next=nextDisp();
        return true;
    }
    else{
        for(int cont=0; cont<tam; cont++){
            if(arreglo[cont]->valor!=-1 && arreglo[cont]->next==-1){
                arreglo[disp]->valor=valor;
                arreglo[disp]->next=nextDisp();
                return true;
            }
        }
    }
    return false;
}

void print(int lista){
    int cont=lista;
    while(cont!=-1){
        cout<<arreglo[cont]<<endl;
        cont=arreglo[cont]->next;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opc;
    int valor;
    int lista;
    for(int cont=0; cont<tam; cont++){
        arreglo[cont]=new Nodo(-1);
    }
    while(true){
        cout<<"1-Agregar"<<endl;
        cout<<"2-Buscar"<<endl;
        cout<<"3-Eliminar"<<endl;
        cout<<"4-Insertar"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                cin>>valor;
                cin>>lista;
                if(lista==1)
                    agregar(valor, m); break;
                if(lista==2)
                    agregar(valor, n); break;
            case 5:
                cin>>lista;
                if(lista==1)
                    print(m); break;
                if(lista==2)
                    print(n); break;

        }
    }
    return a.exec();
}
