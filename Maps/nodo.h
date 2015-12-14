#ifndef NODO_H
#define NODO_H
#include "arista.h"
#include <iostream>
#include <QString>

using namespace std;

class Arista;
class Nodo
{
public:
    QString ciudad;
    int valor;
    Arista* adj;
    Nodo(QString ciudad, int valor);
    void agregarArista(Arista* arista);
};

#endif // NODO_H
