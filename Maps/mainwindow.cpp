#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::pintarLineas()
{
    tmp=new QImage(ui->label->pixmap()->toImage());
    painter=new QPainter(tmp);
    QPen penHLines(QColor("#000000"), 1, Qt::SolidLine, Qt::FlatCap, Qt::RoundJoin);
    painter->setPen(penHLines);
    painter->drawLine(ciudades[0]->punto.x(), ciudades[0]->punto.y(),ciudades[2]->punto.x(), ciudades[2]->punto.y());

    painter->drawLine(ciudades[1]->punto.x(), ciudades[1]->punto.y(),ciudades[2]->punto.x(), ciudades[2]->punto.y());
    painter->drawLine(ciudades[1]->punto.x(), ciudades[1]->punto.y(),ciudades[4]->punto.x(), ciudades[4]->punto.y());

    painter->drawLine(ciudades[3]->punto.x(), ciudades[3]->punto.y(),ciudades[4]->punto.x(), ciudades[4]->punto.y());
    painter->drawLine(ciudades[3]->punto.x(), ciudades[3]->punto.y(),ciudades[5]->punto.x(), ciudades[5]->punto.y());

    painter->drawLine(ciudades[4]->punto.x(), ciudades[4]->punto.y(),ciudades[5]->punto.x(), ciudades[5]->punto.y());
    painter->drawLine(ciudades[4]->punto.x(), ciudades[4]->punto.y(),ciudades[6]->punto.x(), ciudades[6]->punto.y());

    painter->drawLine(ciudades[5]->punto.x(), ciudades[5]->punto.y(),ciudades[9]->punto.x(), ciudades[9]->punto.y());

    painter->drawLine(ciudades[6]->punto.x(), ciudades[6]->punto.y(),ciudades[7]->punto.x(), ciudades[7]->punto.y());

    painter->drawLine(ciudades[7]->punto.x(), ciudades[7]->punto.y(),ciudades[12]->punto.x(), ciudades[12]->punto.y());

    painter->drawLine(ciudades[8]->punto.x(), ciudades[8]->punto.y(),ciudades[13]->punto.x(), ciudades[13]->punto.y());
    painter->drawLine(ciudades[8]->punto.x(), ciudades[8]->punto.y(),ciudades[14]->punto.x(), ciudades[14]->punto.y());

    painter->drawLine(ciudades[9]->punto.x(), ciudades[9]->punto.y(),ciudades[10]->punto.x(), ciudades[10]->punto.y());
    painter->drawLine(ciudades[9]->punto.x(), ciudades[9]->punto.y(),ciudades[16]->punto.x(), ciudades[16]->punto.y());

    painter->drawLine(ciudades[10]->punto.x(), ciudades[10]->punto.y(),ciudades[11]->punto.x(), ciudades[11]->punto.y());

    painter->drawLine(ciudades[11]->punto.x(), ciudades[11]->punto.y(),ciudades[19]->punto.x(), ciudades[19]->punto.y());

    painter->drawLine(ciudades[12]->punto.x(), ciudades[12]->punto.y(),ciudades[13]->punto.x(), ciudades[13]->punto.y());
    painter->drawLine(ciudades[12]->punto.x(), ciudades[12]->punto.y(),ciudades[22]->punto.x(), ciudades[22]->punto.y());

    painter->drawLine(ciudades[13]->punto.x(), ciudades[13]->punto.y(),ciudades[14]->punto.x(), ciudades[14]->punto.y());

    painter->drawLine(ciudades[15]->punto.x(), ciudades[15]->punto.y(),ciudades[16]->punto.x(), ciudades[16]->punto.y());

    painter->drawLine(ciudades[16]->punto.x(), ciudades[16]->punto.y(),ciudades[27]->punto.x(), ciudades[27]->punto.y());

    painter->drawLine(ciudades[17]->punto.x(), ciudades[17]->punto.y(),ciudades[19]->punto.x(), ciudades[19]->punto.y());
    painter->drawLine(ciudades[17]->punto.x(), ciudades[17]->punto.y(),ciudades[27]->punto.x(), ciudades[27]->punto.y());

    painter->drawLine(ciudades[18]->punto.x(), ciudades[18]->punto.y(),ciudades[28]->punto.x(), ciudades[28]->punto.y());

    painter->drawLine(ciudades[19]->punto.x(), ciudades[19]->punto.y(),ciudades[20]->punto.x(), ciudades[20]->punto.y());

    painter->drawLine(ciudades[20]->punto.x(), ciudades[20]->punto.y(),ciudades[21]->punto.x(), ciudades[21]->punto.y());
    painter->drawLine(ciudades[20]->punto.x(), ciudades[20]->punto.y(),ciudades[32]->punto.x(), ciudades[32]->punto.y());

    painter->drawLine(ciudades[21]->punto.x(), ciudades[21]->punto.y(),ciudades[22]->punto.x(), ciudades[22]->punto.y());

    painter->drawLine(ciudades[22]->punto.x(), ciudades[22]->punto.y(),ciudades[23]->punto.x(), ciudades[23]->punto.y());

    painter->drawLine(ciudades[24]->punto.x(), ciudades[24]->punto.y(),ciudades[25]->punto.x(), ciudades[25]->punto.y());
    painter->drawLine(ciudades[24]->punto.x(), ciudades[24]->punto.y(),ciudades[27]->punto.x(), ciudades[27]->punto.y());

    painter->drawLine(ciudades[25]->punto.x(), ciudades[25]->punto.y(),ciudades[26]->punto.x(), ciudades[26]->punto.y());

    painter->drawLine(ciudades[26]->punto.x(), ciudades[26]->punto.y(),ciudades[45]->punto.x(), ciudades[45]->punto.y());
    painter->drawLine(ciudades[26]->punto.x(), ciudades[26]->punto.y(),ciudades[52]->punto.x(), ciudades[52]->punto.y());

    painter->drawLine(ciudades[27]->punto.x(), ciudades[27]->punto.y(),ciudades[28]->punto.x(), ciudades[28]->punto.y());

    painter->drawLine(ciudades[28]->punto.x(), ciudades[28]->punto.y(),ciudades[29]->punto.x(), ciudades[29]->punto.y());
    painter->drawLine(ciudades[28]->punto.x(), ciudades[28]->punto.y(),ciudades[30]->punto.x(), ciudades[30]->punto.y());

    painter->drawLine(ciudades[29]->punto.x(), ciudades[29]->punto.y(),ciudades[45]->punto.x(), ciudades[45]->punto.y());

    painter->drawLine(ciudades[30]->punto.x(), ciudades[30]->punto.y(),ciudades[31]->punto.x(), ciudades[31]->punto.y());
    painter->drawLine(ciudades[30]->punto.x(), ciudades[30]->punto.y(),ciudades[42]->punto.x(), ciudades[42]->punto.y());

    painter->drawLine(ciudades[31]->punto.x(), ciudades[31]->punto.y(),ciudades[32]->punto.x(), ciudades[32]->punto.y());

    painter->drawLine(ciudades[32]->punto.x(), ciudades[32]->punto.y(),ciudades[34]->punto.x(), ciudades[34]->punto.y());
    painter->drawLine(ciudades[32]->punto.x(), ciudades[32]->punto.y(),ciudades[40]->punto.x(), ciudades[40]->punto.y());

    painter->drawLine(ciudades[33]->punto.x(), ciudades[33]->punto.y(),ciudades[34]->punto.x(), ciudades[34]->punto.y());

    painter->drawLine(ciudades[34]->punto.x(), ciudades[34]->punto.y(),ciudades[35]->punto.x(), ciudades[35]->punto.y());
    painter->drawLine(ciudades[34]->punto.x(), ciudades[34]->punto.y(),ciudades[36]->punto.x(), ciudades[36]->punto.y());
    painter->drawLine(ciudades[34]->punto.x(), ciudades[34]->punto.y(),ciudades[37]->punto.x(), ciudades[37]->punto.y());

    painter->drawLine(ciudades[37]->punto.x(), ciudades[37]->punto.y(),ciudades[38]->punto.x(), ciudades[38]->punto.y());
    painter->drawLine(ciudades[37]->punto.x(), ciudades[37]->punto.y(),ciudades[39]->punto.x(), ciudades[39]->punto.y());

    painter->drawLine(ciudades[40]->punto.x(), ciudades[40]->punto.y(),ciudades[41]->punto.x(), ciudades[41]->punto.y());

    painter->drawLine(ciudades[42]->punto.x(), ciudades[42]->punto.y(),ciudades[43]->punto.x(), ciudades[43]->punto.y());
    painter->drawLine(ciudades[42]->punto.x(), ciudades[42]->punto.y(),ciudades[44]->punto.x(), ciudades[44]->punto.y());

    painter->drawLine(ciudades[43]->punto.x(), ciudades[43]->punto.y(),ciudades[46]->punto.x(), ciudades[46]->punto.y());
    painter->drawLine(ciudades[43]->punto.x(), ciudades[43]->punto.y(),ciudades[47]->punto.x(), ciudades[47]->punto.y());

    painter->drawLine(ciudades[45]->punto.x(), ciudades[45]->punto.y(),ciudades[46]->punto.x(), ciudades[46]->punto.y());

    painter->drawLine(ciudades[46]->punto.x(), ciudades[46]->punto.y(),ciudades[47]->punto.x(), ciudades[47]->punto.y());

    painter->drawLine(ciudades[47]->punto.x(), ciudades[47]->punto.y(),ciudades[48]->punto.x(), ciudades[48]->punto.y());

    painter->drawLine(ciudades[48]->punto.x(), ciudades[48]->punto.y(),ciudades[49]->punto.x(), ciudades[49]->punto.y());

    painter->drawLine(ciudades[49]->punto.x(), ciudades[49]->punto.y(),ciudades[50]->punto.x(), ciudades[50]->punto.y());

    painter->drawLine(ciudades[51]->punto.x(), ciudades[51]->punto.y(),ciudades[52]->punto.x(), ciudades[52]->punto.y());

    painter->drawLine(ciudades[52]->punto.x(), ciudades[52]->punto.y(),ciudades[53]->punto.x(), ciudades[53]->punto.y());
    ui->label->setPixmap(QPixmap::fromImage(*tmp));
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label=new Label();

    ciudades[0]=new Nodo("Santa Fe", 0);
    ciudades[0]->punto.setX(36+1); ciudades[0]->punto.setY(450-18);
    ciudades[1]=new Nodo("San Jorge",1);
    ciudades[1]->punto.setX(71+1); ciudades[1]->punto.setY(427-18);
    ciudades[2]=new Nodo("Nueva Ocotepeque", 2);
    ciudades[2]->punto.setX(56+1); ciudades[2]->punto.setY(451-18);
    ciudades[3]=new Nodo("Copan Ruinas",3);
    ciudades[3]->punto.setX(69+1); ciudades[3]->punto.setY(381-18);
    ciudades[4]=new Nodo("Santa Rosa de Copan", 4);
    ciudades[4]->punto.setX(118+1); ciudades[4]->punto.setY(398-18);
    ciudades[5]=new Nodo("Florida", 5);
    ciudades[5]->punto.setX(108+1); ciudades[5]->punto.setY(339-18);
    ciudades[6]=new Nodo("Gracias", 6);
    ciudades[6]->punto.setX(151+1); ciudades[6]->punto.setY(431-18);
    ciudades[7]=new Nodo("Belen", 7);
    ciudades[7]->punto.setX(158+1); ciudades[7]->punto.setY(451-18);
    ciudades[8]=new Nodo("San Andres", 8);
    ciudades[8]->punto.setX(173+1); ciudades[8]->punto.setY(502-18);
    ciudades[9]=new Nodo("Trinidad", 9);
    ciudades[9]->punto.setX(195+1); ciudades[9]->punto.setY(311-18);
    ciudades[10]=new Nodo("Ilama", 10);
    ciudades[10]->punto.setX(192+1); ciudades[10]->punto.setY(338-18);
    ciudades[11]=new Nodo("Santa Barbara", 11);
    ciudades[11]->punto.setX(203+1); ciudades[11]->punto.setY(375-18);
    ciudades[12]=new Nodo("La Esperanza", 12);
    ciudades[12]->punto.setX(210+1); ciudades[12]->punto.setY(476-18);
    ciudades[13]=new Nodo("Dolores", 13);
    ciudades[13]->punto.setX(192+1); ciudades[13]->punto.setY(490-18);
    ciudades[14]=new Nodo("San Antonio", 14);
    ciudades[14]->punto.setX(167+1); ciudades[14]->punto.setY(536-18);
    ciudades[15]=new Nodo("Puerto Cortes", 15);
    ciudades[15]->punto.setX(258+1); ciudades[15]->punto.setY(233-18);
    ciudades[16]=new Nodo("San Pedro Sula", 16);
    ciudades[16]->punto.setX(235+1); ciudades[16]->punto.setY(280-18);
    ciudades[17]=new Nodo("Santa Cruz de Yojoa", 17);
    ciudades[17]->punto.setX(266+1); ciudades[17]->punto.setY(355-18);
    ciudades[18]=new Nodo("Minas de Oro", 18);
    ciudades[18]->punto.setX(305+1); ciudades[18]->punto.setY(366-18);
    ciudades[19]=new Nodo("Taulabe", 19);
    ciudades[19]->punto.setX(241+1); ciudades[19]->punto.setY(405-18);
    ciudades[20]=new Nodo("Comayagua", 20);
    ciudades[20]->punto.setX(295+1); ciudades[20]->punto.setY(455-18);
    ciudades[21]=new Nodo("La Paz", 21);
    ciudades[21]->punto.setX(287+1); ciudades[21]->punto.setY(473-18);
    ciudades[22]=new Nodo("Santa Maria", 22);
    ciudades[22]->punto.setX(247+1); ciudades[22]->punto.setY(498-18);
    ciudades[23]=new Nodo("Cabanas", 23);
    ciudades[23]->punto.setX(240+1); ciudades[23]->punto.setY(527-18);
    ciudades[24]=new Nodo("Tela", 24);
    ciudades[24]->punto.setX(291+1); ciudades[24]->punto.setY(241-18);
    ciudades[25]=new Nodo("Esparta", 25);
    ciudades[25]->punto.setX(352+1); ciudades[25]->punto.setY(250-18);
    ciudades[26]=new Nodo("La Ceiba", 26);
    ciudades[26]->punto.setX(424+1); ciudades[26]->punto.setY(243-18);
    ciudades[27]=new Nodo("El Progreso", 27);
    ciudades[27]->punto.setX(275+1); ciudades[27]->punto.setY(322-18);
    ciudades[28]=new Nodo("Yoro", 28);
    ciudades[28]->punto.setX(370+1); ciudades[28]->punto.setY(342-18);
    ciudades[29]=new Nodo("Olanchito", 29);
    ciudades[29]->punto.setX(459+1); ciudades[29]->punto.setY(288-18);
    ciudades[30]=new Nodo("San Ignacio", 30);
    ciudades[30]->punto.setX(382+1); ciudades[30]->punto.setY(387-18);
    ciudades[31]=new Nodo("San Juan de Flores", 31);
    ciudades[31]->punto.setX(411+1); ciudades[31]->punto.setY(476-18);
    ciudades[32]=new Nodo("Tegucigalpa", 32);
    ciudades[32]->punto.setX(358+1); ciudades[32]->punto.setY(510-18);
    ciudades[33]=new Nodo("Caridad", 33);
    ciudades[33]->punto.setX(287+1); ciudades[33]->punto.setY(559-18);
    ciudades[34]=new Nodo("Nacaome", 34);
    ciudades[34]->punto.setX(316+1); ciudades[34]->punto.setY(598-18);
    ciudades[35]=new Nodo("Amapala", 35);
    ciudades[35]->punto.setX(289+1); ciudades[35]->punto.setY(638-18);
    ciudades[36]=new Nodo("San Isidro", 36);
    ciudades[36]->punto.setX(342+1); ciudades[36]->punto.setY(582-18);
    ciudades[37]=new Nodo("Choluteca", 37);
    ciudades[37]->punto.setX(360+1); ciudades[37]->punto.setY(632-18);
    ciudades[38]=new Nodo("El Triunfo",38);
    ciudades[38]->punto.setX(389+1); ciudades[38]->punto.setY(668-18);
    ciudades[39]=new Nodo("Soledad", 39);
    ciudades[39]->punto.setX(378+1); ciudades[39]->punto.setY(586-18);
    ciudades[40]=new Nodo("Yuscaran", 40);
    ciudades[40]->punto.setX(415+1); ciudades[40]->punto.setY(533-18);
    ciudades[41]=new Nodo("Danli", 41);
    ciudades[41]->punto.setX(493+1); ciudades[41]->punto.setY(511-18);
    ciudades[42]=new Nodo("Juticalpa", 42);
    ciudades[42]->punto.setX(490+1); ciudades[42]->punto.setY(377-18);
    ciudades[43]=new Nodo("San Esteban", 43);
    ciudades[43]->punto.setX(595+1); ciudades[43]->punto.setY(302-18);
    ciudades[44]=new Nodo("Catacamas", 44);
    ciudades[44]->punto.setX(630+1); ciudades[44]->punto.setY(427-18);
    ciudades[45]=new Nodo("Balfate", 45);
    ciudades[45]->punto.setX(507+1); ciudades[45]->punto.setY(248-18);
    ciudades[46]=new Nodo("Trujillo", 46);
    ciudades[46]->punto.setX(554+1); ciudades[46]->punto.setY(222-18);
    ciudades[47]=new Nodo("Iriona", 47);
    ciudades[47]->punto.setX(683+1); ciudades[47]->punto.setY(226-18);
    ciudades[48]=new Nodo("Brus Laguna", 48);
    ciudades[48]->punto.setX(766+1); ciudades[48]->punto.setY(246-18);
    ciudades[49]=new Nodo("Ahuas", 49);
    ciudades[49]->punto.setX(799+1); ciudades[49]->punto.setY(279-18);
    ciudades[50]=new Nodo("Puerto Lempira", 50);
    ciudades[50]->punto.setX(880+1); ciudades[50]->punto.setY(323-18);
    ciudades[51]=new Nodo("Utila", 51);
    ciudades[51]->punto.setX(399+1); ciudades[51]->punto.setY(192-18);
    ciudades[52]=new Nodo("Roatan", 52);
    ciudades[52]->punto.setX(457+1); ciudades[52]->punto.setY(155-18);
    ciudades[53]=new Nodo("Guanaja", 53);
    ciudades[53]->punto.setX(557+1); ciudades[53]->punto.setY(132-18);

    ciudades[0]->agregarArista(new Arista(ciudades[2], 12.023));

    ciudades[1]->agregarArista(new Arista(ciudades[2], 33.386));
    ciudades[1]->agregarArista(new Arista(ciudades[4], 93.037));

    ciudades[2]->agregarArista(new Arista(ciudades[0], 12.023));
    ciudades[2]->agregarArista(new Arista(ciudades[1], 33.386));

    ciudades[3]->agregarArista(new Arista(ciudades[4], 71.853));
    ciudades[3]->agregarArista(new Arista(ciudades[5], 53.509));

    ciudades[4]->agregarArista(new Arista(ciudades[1], 93.037));
    ciudades[4]->agregarArista(new Arista(ciudades[3], 71.853));
    ciudades[4]->agregarArista(new Arista(ciudades[5], 53.802));
    ciudades[4]->agregarArista(new Arista(ciudades[6], 47.190));

    ciudades[5]->agregarArista(new Arista(ciudades[3], 53.509));
    ciudades[5]->agregarArista(new Arista(ciudades[4], 53.802));
    ciudades[5]->agregarArista(new Arista(ciudades[9], 100.935));

    ciudades[6]->agregarArista(new Arista(ciudades[4], 47.190));
    ciudades[6]->agregarArista(new Arista(ciudades[7], 17.279));

    ciudades[7]->agregarArista(new Arista(ciudades[6], 17.279));
    ciudades[7]->agregarArista(new Arista(ciudades[12], 63.263));

    ciudades[8]->agregarArista(new Arista(ciudades[13], 35.946));
    ciudades[8]->agregarArista(new Arista(ciudades[14], 89.514));

    ciudades[9]->agregarArista(new Arista(ciudades[5], 100.935));
    ciudades[9]->agregarArista(new Arista(ciudades[10], 14.955));
    ciudades[9]->agregarArista(new Arista(ciudades[16], 73.837));

    ciudades[10]->agregarArista(new Arista(ciudades[9], 14.955));
    ciudades[10]->agregarArista(new Arista(ciudades[11], 18.0));

    ciudades[11]->agregarArista(new Arista(ciudades[10], 18.0));
    ciudades[11]->agregarArista(new Arista(ciudades[19], 60.4));

    ciudades[12]->agregarArista(new Arista(ciudades[7], 63.263));
    ciudades[12]->agregarArista(new Arista(ciudades[13], 45.453));
    ciudades[12]->agregarArista(new Arista(ciudades[22], 61.248));

    ciudades[13]->agregarArista(new Arista(ciudades[8], 35.946));
    ciudades[13]->agregarArista(new Arista(ciudades[12], 45.453));
    ciudades[13]->agregarArista(new Arista(ciudades[14], 67.302));

    ciudades[14]->agregarArista(new Arista(ciudades[8], 89.514));
    ciudades[14]->agregarArista(new Arista(ciudades[13], 67.302));

    ciudades[15]->agregarArista(new Arista(ciudades[16], 51.125));

    ciudades[16]->agregarArista(new Arista(ciudades[9], 14.955));
    ciudades[16]->agregarArista(new Arista(ciudades[15], 51.125));
    ciudades[16]->agregarArista(new Arista(ciudades[27], 30.536));

    ciudades[17]->agregarArista(new Arista(ciudades[19], 45.377));
    ciudades[17]->agregarArista(new Arista(ciudades[27], 56.686));

    ciudades[18]->agregarArista(new Arista(ciudades[28], 87.2));

    ciudades[19]->agregarArista(new Arista(ciudades[11], 60.4));
    ciudades[19]->agregarArista(new Arista(ciudades[17], 45.377));
    ciudades[19]->agregarArista(new Arista(ciudades[20], 58.6));

    ciudades[20]->agregarArista(new Arista(ciudades[19], 58.6));
    ciudades[20]->agregarArista(new Arista(ciudades[21], 23.7));
    ciudades[20]->agregarArista(new Arista(ciudades[32], 89.9));

    ciudades[21]->agregarArista(new Arista(ciudades[20], 23.7));
    ciudades[21]->agregarArista(new Arista(ciudades[22], 54.3));

    ciudades[22]->agregarArista(new Arista(ciudades[12], 61.248));
    ciudades[22]->agregarArista(new Arista(ciudades[21], 54.3));
    ciudades[22]->agregarArista(new Arista(ciudades[23], 46.883));

    ciudades[23]->agregarArista(new Arista(ciudades[22], 46.883));

    ciudades[24]->agregarArista(new Arista(ciudades[27], 67.039));
    ciudades[24]->agregarArista(new Arista(ciudades[25], 47.602));

    ciudades[25]->agregarArista(new Arista(ciudades[24], 47.602));
    ciudades[25]->agregarArista(new Arista(ciudades[26], 81.709));

    ciudades[26]->agregarArista(new Arista(ciudades[25], 81.709));
    ciudades[26]->agregarArista(new Arista(ciudades[45], 47.762));
    ciudades[26]->agregarArista(new Arista(ciudades[52], 67.48));

    ciudades[27]->agregarArista(new Arista(ciudades[16], 30.536));
    ciudades[27]->agregarArista(new Arista(ciudades[17], 56.686));
    ciudades[27]->agregarArista(new Arista(ciudades[24], 67.039));
    ciudades[27]->agregarArista(new Arista(ciudades[28], 131));

    ciudades[28]->agregarArista(new Arista(ciudades[18], 87.2));
    ciudades[28]->agregarArista(new Arista(ciudades[27], 131));
    ciudades[28]->agregarArista(new Arista(ciudades[29], 107));
    ciudades[28]->agregarArista(new Arista(ciudades[30], 119));

    ciudades[29]->agregarArista(new Arista(ciudades[28], 107));
    ciudades[29]->agregarArista(new Arista(ciudades[45], 90.834));

    ciudades[30]->agregarArista(new Arista(ciudades[28], 119));
    ciudades[30]->agregarArista(new Arista(ciudades[31], 68.150));
    ciudades[30]->agregarArista(new Arista(ciudades[42], 154.583));

    ciudades[31]->agregarArista(new Arista(ciudades[30], 68.150));
    ciudades[31]->agregarArista(new Arista(ciudades[32], 51.190));

    ciudades[32]->agregarArista(new Arista(ciudades[20], 89.9));
    ciudades[32]->agregarArista(new Arista(ciudades[31], 51.190));
    ciudades[32]->agregarArista(new Arista(ciudades[34], 104.026));
    ciudades[32]->agregarArista(new Arista(ciudades[40], 67.453));

    ciudades[33]->agregarArista(new Arista(ciudades[34], 63.920));

    ciudades[34]->agregarArista(new Arista(ciudades[32], 104.026));
    ciudades[34]->agregarArista(new Arista(ciudades[33], 63.920));
    ciudades[34]->agregarArista(new Arista(ciudades[35], 48.184));
    ciudades[34]->agregarArista(new Arista(ciudades[36], 36.191));
    ciudades[34]->agregarArista(new Arista(ciudades[37], 56.6));

    ciudades[35]->agregarArista(new Arista(ciudades[34], 48.184));

    ciudades[36]->agregarArista(new Arista(ciudades[34], 36.191));

    ciudades[37]->agregarArista(new Arista(ciudades[34], 56.6));
    ciudades[37]->agregarArista(new Arista(ciudades[38], 40.3));
    ciudades[37]->agregarArista(new Arista(ciudades[39], 46.4));

    ciudades[38]->agregarArista(new Arista(ciudades[37], 40.3));

    ciudades[39]->agregarArista(new Arista(ciudades[37], 46.4));

    ciudades[40]->agregarArista(new Arista(ciudades[32], 67.453));
    ciudades[40]->agregarArista(new Arista(ciudades[41], 63.925));

    ciudades[41]->agregarArista(new Arista(ciudades[40], 63.925));

    ciudades[42]->agregarArista(new Arista(ciudades[30], 154.583));
    ciudades[42]->agregarArista(new Arista(ciudades[43], 107.091));
    ciudades[42]->agregarArista(new Arista(ciudades[44], 44.010));

    ciudades[43]->agregarArista(new Arista(ciudades[42], 107.091));
    ciudades[43]->agregarArista(new Arista(ciudades[46], 125.806));
    ciudades[43]->agregarArista(new Arista(ciudades[47], 172.791));

    ciudades[44]->agregarArista(new Arista(ciudades[42], 44.010));

    ciudades[45]->agregarArista(new Arista(ciudades[26], 47.762));
    ciudades[45]->agregarArista(new Arista(ciudades[29], 90.834));
    ciudades[45]->agregarArista(new Arista(ciudades[46], 132.361));

    ciudades[46]->agregarArista(new Arista(ciudades[43], 125.806));
    ciudades[46]->agregarArista(new Arista(ciudades[45], 132.361));
    ciudades[46]->agregarArista(new Arista(ciudades[47], 124.621));

    ciudades[47]->agregarArista(new Arista(ciudades[43], 172.791));
    ciudades[47]->agregarArista(new Arista(ciudades[46], 124.621));
    ciudades[47]->agregarArista(new Arista(ciudades[48], 62.56));

    ciudades[48]->agregarArista(new Arista(ciudades[47], 62.56));
    ciudades[48]->agregarArista(new Arista(ciudades[49], 37.67));

    ciudades[49]->agregarArista(new Arista(ciudades[48], 37.67));
    ciudades[49]->agregarArista(new Arista(ciudades[50], 66.80));

    ciudades[50]->agregarArista(new Arista(ciudades[49], 66.80));

    ciudades[51]->agregarArista(new Arista(ciudades[52], 49.08));

    ciudades[52]->agregarArista(new Arista(ciudades[26], 67.48));
    ciudades[52]->agregarArista(new Arista(ciudades[51], 49.08));
    ciudades[52]->agregarArista(new Arista(ciudades[53], 70.96));

    ciudades[53]->agregarArista(new Arista(ciudades[52], 70.96));

    dijkstra=new Dijkstra(ciudades);
    floyd=new Floyd(ciudades);
    pintarLineas();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botonDijkstra_clicked()
{
    int num1=dijkstra->buscar(ui->DCiudad->text());
    cout<<ui->DCiudad->text().toUtf8().constData();
    cout<<num1<<endl;
    if(num1!=-1)
        dijkstra->resolverD(num1);
    QString text="Ciudad\tCosto\tPath \n";
    for(int cont=0; cont<54; cont++){
        text=text+dijkstra->ciudadesD[cont]->nodo->ciudad+"\t"+QString::number(dijkstra->ciudadesD[cont]->costo)+
                "\t"+QString::number(dijkstra->ciudadesD[cont]->path)+"\n";
    }

    int num2=dijkstra->buscar(ui->DCiudadDestino->text());
    QPen penHLines(QColor("#00ff00"), 1, Qt::SolidLine, Qt::FlatCap, Qt::RoundJoin);
    painter->setPen(penHLines);
    while(num2!=num1){
        painter->drawLine(dijkstra->ciudadesD[num2]->nodo->punto.x(), dijkstra->ciudadesD[num2]->nodo->punto.y(),
                          dijkstra->ciudadesD[dijkstra->ciudadesD[num2]->path]->nodo->punto.x(),
                dijkstra->ciudadesD[dijkstra->ciudadesD[num2]->path]->nodo->punto.y());
        num2=dijkstra->ciudadesD[num2]->path;
    }
    ui->label->setPixmap(QPixmap::fromImage(*tmp));
    label->show();
    label->print(text);

}

void MainWindow::on_botonPrim_clicked()
{

}

void MainWindow::on_botonFloyd_clicked()
{
    floyd->resolverF();
    QString text="";
    for(int cont=0; cont<54; cont++){
        text=text+ciudades[cont]->ciudad+"\t";
    }
    text=text+"\n";
    for(int cont=0; cont<54; cont++){
        text=text+ciudades[cont]->ciudad+"\t";
        for(int cont1=0; cont1<54; cont1++){
            text=text+QString::number(floyd->tablaFC[cont][cont1])+"\t";
        }
        text=text+"\n";
    }
    label->show();
    label->print(text);
}

void MainWindow::on_toolButton_clicked()
{
        pintarLineas();
}
