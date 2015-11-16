#ifndef LOG_H
#define LOG_H
#include <QGraphicsTextItem>
#include <QString>

class Log: public QGraphicsTextItem
{
public:
    QString texto;
    Log(QGraphicsItem * parent=0);
    void actualizar(QString string);
};

#endif // LOG_H
