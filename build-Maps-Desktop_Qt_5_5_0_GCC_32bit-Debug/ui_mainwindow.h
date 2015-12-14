/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QToolButton *botonDijkstra;
    QToolButton *botonPrim;
    QToolButton *botonFloyd;
    QToolButton *botonKruskal;
    QLabel *label_2;
    QLineEdit *DCiudad;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1343, 906);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 1001, 631));
        label->setBaseSize(QSize(1000, 751));
        label->setPixmap(QPixmap(QString::fromUtf8("../Mapa/mapa.jpg")));
        botonDijkstra = new QToolButton(centralWidget);
        botonDijkstra->setObjectName(QStringLiteral("botonDijkstra"));
        botonDijkstra->setGeometry(QRect(80, 0, 101, 24));
        botonDijkstra->setMouseTracking(true);
        botonDijkstra->setCheckable(false);
        botonPrim = new QToolButton(centralWidget);
        botonPrim->setObjectName(QStringLiteral("botonPrim"));
        botonPrim->setGeometry(QRect(400, 0, 101, 24));
        botonFloyd = new QToolButton(centralWidget);
        botonFloyd->setObjectName(QStringLiteral("botonFloyd"));
        botonFloyd->setGeometry(QRect(740, 0, 101, 24));
        botonKruskal = new QToolButton(centralWidget);
        botonKruskal->setObjectName(QStringLiteral("botonKruskal"));
        botonKruskal->setGeometry(QRect(1100, 0, 101, 24));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1030, 30, 301, 871));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DCiudad = new QLineEdit(centralWidget);
        DCiudad->setObjectName(QStringLiteral("DCiudad"));
        DCiudad->setGeometry(QRect(200, 0, 113, 26));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1343, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QString());
        botonDijkstra->setText(QApplication::translate("MainWindow", "Dijkstra", 0));
        botonPrim->setText(QApplication::translate("MainWindow", "Prim", 0));
        botonFloyd->setText(QApplication::translate("MainWindow", "Floyd", 0));
        botonKruskal->setText(QApplication::translate("MainWindow", "Kruskal", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
