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
    if(pos>cantAct)
        return agregar(valor);

    return false;
}

int buscar(int valor){
    for(int cont=0; cont<cant; cant++){
        if(arreglo[cont]==valor)
            return cont;
    }
    return -1
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x;
    cin>>x;
    agregar(x);
    cin>>x;
    eliminar(x);
    return a.exec();
}
