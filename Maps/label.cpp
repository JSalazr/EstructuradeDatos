#include "label.h"
#include "ui_label.h"

Label::Label(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Label)
{
    ui->setupUi(this);
    lay=new QVBoxLayout(this);
    lay->addWidget(ui->hola);
    ui->scrollAreaWidgetContents->setLayout(lay);
}

Label::~Label()
{
    delete ui;
}

void Label::print(QString text)
{
    ui->hola->setText(text);
    ui->scrollAreaWidgetContents->setLayout(lay);
}
