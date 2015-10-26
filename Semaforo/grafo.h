#ifndef DIAGRAMA_H
#define DIAGRAMA_H
#include <string>
#include "nodo.h"

#include <iostream>

using namespace std;

class Grafo
{
private:
    Nodo* arreglo[15];
    int tam;
public:
    Grafo();
    void addNodo(Nodo* nodo);
    void ordenar();
    void print();
};

#endif // GRAFO_H
