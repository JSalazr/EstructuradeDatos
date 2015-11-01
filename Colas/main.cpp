#include <QCoreApplication>
#include <iostream>

using namespace std;

class Nodo{
public:
    char valor;
    Nodo *next;
    Nodo(char valor){
        this->valor=valor;
    }
};

Nodo* begin;
Nodo* last;

Nodo* pop(){
    Nodo* temp=begin;
    begin=temp->next;
    return temp;
}

void push(char valor){
    if(begin==NULL){
        begin=new Nodo(valor);
        last=begin;
    }
    else{
        last->next=new Nodo(valor);
        last=last->next;
    }
}

Nodo* touch(){
    return begin;
}

void imprimir(){
    Nodo* temp=begin;
    while(temp!=NULL){
        cout<<temp->valor<<endl;
        temp=temp->next;
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
