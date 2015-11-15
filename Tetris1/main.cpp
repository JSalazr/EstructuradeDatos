#include <QApplication>
#include <QGraphicsScene>
#include "rect1.h"
#include <QGraphicsView>
#include "game.h"

Game* game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game=new Game();
    return a.exec();
}
