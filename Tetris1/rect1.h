#ifndef RECT1
#define RECT1

#include <QGraphicsRectItem>
#include <QObject>

class rect1 : public QObject, public QGraphicsRectItem{
Q_OBJECT;
public:
    QTimer *timer;
    int fila;
    int tam;
    rect1(int tam);
    void elim(int fila);
    void keyPressEvent(QKeyEvent *event);
    void nuevo();
    bool soloAbajo();
public slots:
    void move();
};

#endif // RECT1

