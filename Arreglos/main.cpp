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
