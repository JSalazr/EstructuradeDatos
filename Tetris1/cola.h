#ifndef COLA_H
#define COLA_H
#include "nodocola.h"


class Cola
{
public:
    Cola();
    NodoCola* begin;
    NodoCola* last;

    NodoCola* pop(NodoCola** begin, NodoCola** last);
    void push(int resp, QString string, NodoCola** begin, NodoCola** last);
};

#endif // COLA_H
