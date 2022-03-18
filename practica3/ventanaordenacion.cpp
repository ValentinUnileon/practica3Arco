#include "ventanaordenacion.h"
#include "ui_ventanaordenacion.h"
#include "menu.h"
#include <chrono>
#include <string>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>

#include <fstream>
#include <stdlib.h>

#define length(x) (sizeof(x)/sizeof(x[0]))

using namespace std;

ventanaOrdenacion::ventanaOrdenacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaOrdenacion)
{
    ui->setupUi(this);
}

ventanaOrdenacion::~ventanaOrdenacion()
{
    delete ui;
}

void ventanaOrdenacion::on_botonVolver_clicked()
{
    menu *m = new menu();

    m->show();
    this->close();

}


void ventanaOrdenacion::on_botonEjecutar_clicked()
{
    int i,j,suma;
    float total;

    //introducir datos

    ifstream archivo;

    archivo.open(this->direccionFichero.toStdString(), ios::in);

    int numero;
    vector<int> numeros;
    int is=0;

    while (archivo)
    {
        if (archivo >> numero){
            numeros.push_back(numero);
            cout << numeros[is];
            is++;
        }
    }




    //INICIO DEL BUCLE DE EJECUCIONES

    for (i = 0; i < 5; i++) {

        auto comienzo = std::chrono::high_resolution_clock::now();

        //-------------------------------------------------

        //int v[]={3, 34, 1, 53, 15, 6};  //ejemplo de numeros a ordenar
        int auxiliar;


        // Ordenación
        for(int i=0; i<(int)length(numeros)-1; i++){


            // Comparaciones
            for(int j=0; j<((int)length(numeros)-1)-i; j++){
            // Intercambiar los elementos
            if(numeros[j] > numeros[j+1]){
                auxiliar=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=auxiliar;
                }
            }

        }

         QString resultado;


        for(int i=0; i<(int)length(numeros); i++){


               resultado.append(QString::number(numeros[i]));
               resultado.append(" ");


        }

        ui->resultado->setText(resultado);







        //-------------------------------------------------


        auto final = std::chrono::high_resolution_clock::now();
        auto aux = std::chrono::duration_cast<std::chrono::nanoseconds>(final - comienzo);

        auto duracion = aux*1e-9;

        QString s = QString::number(duracion.count());
        s.remove(5, 5);

        s.append(" segundos");


        if (i == 0) {

            ui->boxTiempo1->setText(s);
        } else if (i==1){

            ui->boxTiempo2->setText(s);
        } else if (i==2){

            ui->boxTiempo3->setText(s);
        } else if (i==3){

            ui->boxTiempo4->setText(s);
        } else {

            ui->boxTiempo5->setText(s);
        }

        total = total + (float)duracion.count();

    }

    //FIN DEL BUCLE DE EJECUCIONES

    float media = total/5;

    QString t = QString::number(media);
    t.remove(5, 5);
    t.append(" segundos");

    ui->boxMedia->setText(t);

}


void ventanaOrdenacion::on_botonResetear_clicked()
{
    ui->boxTiempo1->setText("");
    ui->boxTiempo2->setText("");
    ui->boxTiempo3->setText("");
    ui->boxTiempo4->setText("");
    ui->boxTiempo5->setText("");
    ui->boxMedia->setText("");
}


void ventanaOrdenacion::on_botonDirectorio_clicked()
{

    QString homeDir=QDir::homePath ();
    this->direccionFichero = QFileDialog::getOpenFileName(this, tr("Abrir archivo"), homeDir);

    QMessageBox::information(this, tr("Nombre"), direccionFichero);

}

