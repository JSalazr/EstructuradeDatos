#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ciudades[0]=new Nodo("Santa Fe", 0);
    ciudades[1]=new Nodo("San Jorge",1);
    ciudades[2]=new Nodo("Nueva Ocotepeque", 2);
    ciudades[3]=new Nodo("Copan Ruinas",3);
    ciudades[4]=new Nodo("Santa Rosa de Copan", 4);
    ciudades[5]=new Nodo("Florida", 5);
    ciudades[6]=new Nodo("Gracias", 6);
    ciudades[7]=new Nodo("Belen", 7);
    ciudades[8]=new Nodo("San Andres", 8);
    ciudades[9]=new Nodo("Trinidad", 9);
    ciudades[10]=new Nodo("Ilama", 10);
    ciudades[11]=new Nodo("Santa Barbara", 11);
    ciudades[12]=new Nodo("La Esperanza", 12);
    ciudades[13]=new Nodo("Dolores", 13);
    ciudades[14]=new Nodo("San Antonio", 14);
    ciudades[15]=new Nodo("Puerto Cortes", 15);
    ciudades[16]=new Nodo("San Pedro Sula", 16);
    ciudades[17]=new Nodo("Santa Cruz de Yojoa", 17);
    ciudades[18]=new Nodo("Minas de Oro", 18);
    ciudades[19]=new Nodo("Taulabe", 19);
    ciudades[20]=new Nodo("Comayagua", 20);
    ciudades[21]=new Nodo("La Paz", 21);
    ciudades[22]=new Nodo("Santa Maria", 22);
    ciudades[23]=new Nodo("Cabanas", 23);
    ciudades[24]=new Nodo("Tela", 24);
    ciudades[25]=new Nodo("Esparta", 25);
    ciudades[26]=new Nodo("La Ceiba", 26);
    ciudades[27]=new Nodo("El Progreso", 27);
    ciudades[28]=new Nodo("Yoro", 28);
    ciudades[29]=new Nodo("Olanchito", 29);
    ciudades[30]=new Nodo("San Ignacio", 30);
    ciudades[31]=new Nodo("San Juan de Flores", 31);
    ciudades[32]=new Nodo("Tegucigalpa", 32);
    ciudades[33]=new Nodo("Caridad", 33);
    ciudades[34]=new Nodo("Nacaome", 34);
    ciudades[35]=new Nodo("Amapala", 35);
    ciudades[36]=new Nodo("San Isidro", 36);
    ciudades[37]=new Nodo("Choluteca", 37);
    ciudades[38]=new Nodo("El Triunfo",38);
    ciudades[39]=new Nodo("Soledad", 39);
    ciudades[40]=new Nodo("Yuscaran", 40);
    ciudades[41]=new Nodo("Danli", 41);
    ciudades[42]=new Nodo("Juticalpa", 42);
    ciudades[43]=new Nodo("San Esteban", 43);
    ciudades[44]=new Nodo("Catacamas", 44);
    ciudades[45]=new Nodo("Balfate", 45);
    ciudades[46]=new Nodo("Trujillo", 46);
    ciudades[47]=new Nodo("Iriona", 47);
    ciudades[48]=new Nodo("Brus Laguna", 48);
    ciudades[49]=new Nodo("Ahuas", 49);
    ciudades[50]=new Nodo("Puerto Lempira", 50);
    ciudades[51]=new Nodo("Utila", 51);
    ciudades[52]=new Nodo("Roatan", 52);
    ciudades[53]=new Nodo("Guanaja", 53);

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

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botonDijkstra_clicked()
{
    int num=dijkstra->buscar(ui->DCiudad->text());
    cout<<ui->DCiudad->text().toUtf8().constData();
    cout<<num<<endl;
    if(num!=-1)
        dijkstra->resolverD(num);
    QString text="Ciudad        Costo       Path \n";
    for(int cont=0; cont<54; cont++){
        text=text+dijkstra->ciudadesD[cont]->nodo->ciudad+"     "+QString::number(dijkstra->ciudadesD[cont]->costo)+"        "+QString::number(dijkstra->ciudadesD[cont]->path)+"\n";
    }
    ui->label_2->setText(text);

}

void MainWindow::on_botonPrim_clicked()
{

}
