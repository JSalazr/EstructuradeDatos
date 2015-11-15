#ifndef NODO_H
#define NODO_H


class Nodo
{
public:
    char val;
    Nodo* izq;
    Nodo* der;
    Nodo(char val);
};

#endif // NODO_H
