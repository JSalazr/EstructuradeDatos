#ifndef RECT2_H
#define RECT2_H
#include <QGraphicsRectItem>
#include <QObject>


class rect2 : public QObject, public QGraphicsRectItem{
public:
    int tam;
    int pos;
    rect2(int tam, int pos);
};

#endif // RECT2_H
