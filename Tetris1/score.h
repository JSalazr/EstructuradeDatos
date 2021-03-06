#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QString>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    int getScore();
    void resetScore();
private:
    int score;
};

#endif // SCORE_H
