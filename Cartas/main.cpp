#include <QCoreApplication>
#include <iostream>

using namespace std;

void desplazamiento(char arreglo[], int pos, int cant){
    while(pos<cant){
        char carta=arreglo[pos];
        arreglo[pos]=arreglo[pos+1];
        arreglo[pos+1]=carta;
        pos++;
    }
}

char* arreglar(char arreglo[], int c){
    for(int x=0; x<c; x++){
        for(int y=x+1; y<c; y++){
                if(arreglo[x]==arreglo[y]){
                    arreglo[y]=0;
                    desplazamiento(arreglo, y, c);
                }
        }
    }
    for(int x=0;x<cant; x++){
        cout<<arreglo[x]<<endl;
    }
    return arreglo;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char desorden[5];
    int cantidad;
    cout<<"Ingrese el tamano del arreglo"<<endl;
    cin>>cantidad;
    for(int x=0;x<cantidad; x++){
        cout<<"Ingrese un valor"<<endl;
        cin>>desorden[x];
    }
    arreglar(desorden, cantidad);


    return a.exec();
}
