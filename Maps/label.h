#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QVBoxLayout>

namespace Ui {
class Label;
}

class Label : public QWidget
{
    Q_OBJECT

public:
    QVBoxLayout * lay;
    explicit Label(QWidget *parent = 0);
    ~Label();
    void print(QString text);

private:
    Ui::Label *ui;
};

#endif // LABEL_H
