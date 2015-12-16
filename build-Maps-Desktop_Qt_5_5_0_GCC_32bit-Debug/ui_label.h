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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Label
{
public:
    QLabel *hola;
    QScrollArea *hola1;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Label)
    {
        if (Label->objectName().isEmpty())
            Label->setObjectName(QStringLiteral("Label"));
        Label->resize(731, 492);
        hola = new QLabel(Label);
        hola->setObjectName(QStringLiteral("hola"));
        hola->setGeometry(QRect(70, 30, 1381, 481));
        hola1 = new QScrollArea(Label);
        hola1->setObjectName(QStringLiteral("hola1"));
        hola1->setGeometry(QRect(20, 20, 681, 461));
        hola1->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 459));
        hola1->setWidget(scrollAreaWidgetContents);

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
