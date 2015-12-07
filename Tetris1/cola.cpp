#include "cola.h"

Cola::Cola()
{
    this->begin=NULL;
    this->last=NULL;
}

NodoCola* Cola::pop(NodoCola** begin, NodoCola** last){
    NodoCola* temp=this->begin;
    this->begin=temp->next;
    return temp;
}

void Cola::push(int resp, QString string, NodoCola** begin, NodoCola** last){
    if(this->begin==NULL){
        this->begin=new NodoCola(resp, string);
        this->last=this->begin;
    }else{
        this->last->next=new NodoCola(resp, string);
        this->last=this->last->next;
    }
}
