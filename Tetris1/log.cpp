#include "log.h"
#include <QFont>

Log::Log(QGraphicsItem * parent): QGraphicsTextItem(parent)
{
    texto=" - ";
    setPlainText(texto);
    setDefaultTextColor(Qt::black);
    setFont(QFont("arial", 12));
}

void Log::actualizar(QString string){
    texto=string;
    setPlainText(texto);
}

