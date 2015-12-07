#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <QString>

class NodoCola{
public:
    NodoCola *next;
    int resp;
    QString string;
    NodoCola(int resp, QString string){
        this->resp=resp;
        this->string=string;
    }
    NodoCola* pop(NodoCola* begin, NodoCola* last);
    void push(int resp, QString string, NodoCola* begin, NodoCola* last);
};

#endif // NODOCOLA_H
