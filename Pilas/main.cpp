#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    char valor;
    Nodo *before;
    Nodo(char valor){
        this->valor=valor;
    }
};

Nodo* last;

void push(char valor){
    if(last==NULL){
        last=new Nodo(valor);
    }
    else{
        Nodo* temp=new Nodo(valor);
        temp->before=last;
        last=temp;
    }
}

Nodo* pop(){
    Nodo* temp=last;
    last=last->before;
    return temp;
}

Nodo* touch(){
    return last;
}

void imprimir(){
    Nodo* temp=last;
    while(temp!=NULL){
        cout<<temp->valor<<endl;
        temp=temp->before;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opc;
    char valor;
    while(true){
        cout<<"1-Push"<<endl;
        cout<<"2-Pop"<<endl;
        cout<<"3-Touch"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                cin>>valor;
                push(valor); break;
            case 2:
                pop(); break;
            case 3:
                cout<<touch()->valor<<endl; break;
            case 4:
                imprimir(); break;
        }
    }
    return a.exec();
}
