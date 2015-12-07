#include <QCoreApplication>
#include <iostream>

using namespace std;
const int cant=15;
int arreglo[cant];
int cantAct=0;

bool agregar(int valor){
    if(cantAct<cant){
        arreglo[cantAct++]=valor;
        return true;
    }
    return false;
}

bool eliminar(int pos){
    if(pos<cantAct && pos>=0 && cantAct>0)
        {
            for(int cont = pos; cont < cantAct; cont++)
                arreglo[cont]=arreglo[cont+1];
            cantAct--;
            return true;
        }
        return false;
}

bool insertar(int pos, int valor){
    if(pos<cantAct && pos>=0 && cantAct<cant)
        {
            for(int cont = cantAct; cont > pos; cont--)
                arreglo[cont]=arreglo[cont-1];
            arreglo[pos]=valor;
            cantAct++;
            return true;
        }
    if(pos>=cantAct)
        return agregar(valor);

    return false;
}

int buscar(int valor){
    for(int cont=0; cont<cantAct; cont++){
        if(arreglo[cont]==valor)
            return cont;
    }
    return -1;
}

void imprimir(){
    for(int cont=0; cont<cantAct; cont++){
        cout<<arreglo[cont]<<endl;
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
                cout<<buscar(valor)<<endl; break;
            case 3:
                cin>>valor;
                eliminar(valor); break;
            case 4:
                int pos;
                cin>>valor;
                cin>>pos;
                insertar(pos, valor); break;
            case 5:
                imprimir(); break;
        }
 }
    return a.exec();
}

