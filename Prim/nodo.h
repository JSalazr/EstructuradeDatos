#ifndef NODO_H
#define NODO_H
#include "arista.h"
#include <iostream>

using namespace std;

class Arista;
class Nodo
{
public:
    int valor;
    Arista* adj;
    Nodo(int valor);
    void agregarArista(Arista* arista);
};

#endif // NODO_H
