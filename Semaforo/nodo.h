#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

class Nodo{
private:
    string nombre;
    int tam;
    int fase;
public:
    Nodo* aristas[10];
    Nodo(string nom);
    int getTam();
    int getFase();
    string getNombre();
    void setFase(int fas);
    void addArista(Nodo* nodo);
    bool revisarFase(int fase);
};

#endif // NODO_H
