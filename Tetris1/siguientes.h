#ifndef SIGUIENTES_H
#define SIGUIENTES_H
#include <QGraphicsTextItem>
#include <QString>

class Siguientes: public QGraphicsTextItem
{
public:

    Siguientes(QGraphicsItem * parent=0);
    void actualizar(QString string);
};

#endif // SIGUIENTES_H
