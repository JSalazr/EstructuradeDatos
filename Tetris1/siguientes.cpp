#include "siguientes.h"
#include <QFont>

Siguientes::Siguientes(QGraphicsItem * parent): QGraphicsTextItem(parent)
{
    setPlainText(QString(" "));
    setDefaultTextColor(Qt::black);
    setFont(QFont("arial", 12));
}

void Siguientes::actualizar(QString string){
    setPlainText(string);
    setDefaultTextColor(Qt::black);
    setFont(QFont("arial", 12));
}

