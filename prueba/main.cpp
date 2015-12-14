#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QApplication a(argc, argv);

    QImage myImage;
    myImage.load("mapa.png");

    QLabel myLabel;
    myLabel.setPixmap(QPixmap::fromImage(myImage));

    myLabel.show();
    return a.exec();
}
