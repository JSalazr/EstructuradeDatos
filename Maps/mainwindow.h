#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "nodo.h"
#include "dijkstra.h"
#include <QLabel>
#include <QGraphicsScene>
#include <QPixmap>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Nodo* ciudades[54];
    Dijkstra *dijkstra;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_botonDijkstra_clicked();

    void on_botonPrim_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
