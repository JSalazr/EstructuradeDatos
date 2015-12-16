#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "nodo.h"
#include "dijkstra.h"
#include "label.h"
#include "floyd.h"
#include "prim.h"
#include <QLabel>
#include <QPainter>
#include <QGraphicsScene>
#include <QPixmap>
#include <QMainWindow>
#include <QTableView>
#include <QPainter>
#include <QImage>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Label *label;
    QTableView *tabla;
    Nodo* ciudades[54];
    Prim* prim;
    Dijkstra *dijkstra;
    QPainter *painter;
    QImage *tmp;
    Floyd* floyd;
    void pintarLineas();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_botonDijkstra_clicked();

    void on_botonPrim_clicked();

    void on_botonFloyd_clicked();

    void on_toolButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
