#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
public:
    string palabra;
    Nodo* next;
    Nodo(string palabra);
};

#endif // NODO_H
