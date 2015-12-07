#include "game.h"
#include "nodocola.h"

extern Game* game;
NodoCola* NodoCola::pop(NodoCola* begin, NodoCola* last){
    NodoCola* temp=begin;
    begin=temp->next;
    return temp;
}

void NodoCola::push(int resp, QString string, NodoCola* begin, NodoCola* last){
    if(begin->resp==-1){
        begin=new NodoCola(resp, string);
        last=begin;
    }else{
        last->next=new NodoCola(resp, string);
        last=last->next;
    }
}


