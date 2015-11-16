#ifndef ARBOLES_H
#define ARBOLES_H
#include <queue>
#include "nodo.h"
#include <QString>


class Arboles
{
public:
    char arr[11];
    int resp;
    Arboles();
    void resolver();
    void armar();
    int ecuacion(char operador, int num1, int num2);
};

#endif // ARBOLES_H
