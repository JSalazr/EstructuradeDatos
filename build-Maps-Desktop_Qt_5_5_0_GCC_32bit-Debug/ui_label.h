/********************************************************************************
** Form generated from reading UI file 'label.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABEL_H
#define UI_LABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Label
{
public:
    QLabel *hola;
    QTableView *tableView;

    void setupUi(QWidget *Label)
    {
        if (Label->objectName().isEmpty())
            Label->setObjectName(QStringLiteral("Label"));
        Label->resize(1475, 646);
        hola = new QLabel(Label);
        hola->setObjectName(QStringLiteral("hola"));
        hola->setGeometry(QRect(70, 30, 1381, 481));
        tableView = new QTableView(Label);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 40, 256, 192));

        retranslateUi(Label);

        QMetaObject::connectSlotsByName(Label);
    } // setupUi

    void retranslateUi(QWidget *Label)
    {
        Label->setWindowTitle(QApplication::translate("Label", "Form", 0));
        hola->setText(QApplication::translate("Label", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Label: public Ui_Label {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABEL_H
