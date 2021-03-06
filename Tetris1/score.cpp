#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    score=0;
    setPlainText(QString("Score: ")+QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("arial", 15));
}

void Score::increase(){
    score+=10;
    setPlainText(QString("Score: ")+ QString::number(score));
}

int Score::getScore(){
    return score;
}

void Score::resetScore(){
    score=0;
    setPlainText(QString("Score: ")+ QString::number(score));
}
