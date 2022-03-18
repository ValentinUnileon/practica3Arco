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
    if(this->direccionFicheroEntrada=="" || this->direccionFicheroSalida==""){

        QMessageBox::information(this, tr("Error"), "Asegurate de seleccionar la direccion de entrada y salida");

    }else{

        int i;
        float total;

        //introducir datos

        ifstream archivo;

        archivo.open(this->direccionFicheroEntrada.toStdString(), ios::in);

        int numero;
        vector<int> numeros;
        vector<int> numerosFijos;

        while (archivo)
        {
            if (archivo >> numero){
                numeros.push_back(numero);
                numerosFijos.push_back(numero);

            }
        }




        //INICIO DEL BUCLE DE EJECUCIONES

        for (i = 0; i < 5; i++) {

            auto comienzo = std::chrono::high_resolution_clock::now();

            //-------------------------------------------------

            numeros = numerosFijos;
            int auxiliar;


            // Ordenación
            for(int h=0; h<(int)numeros.size()-1; h++){


                // Comparaciones
                for(int k=0; k<((int)numeros.size()-1)-h; k++){
                // Intercambiar los elementos
                if(numeros[k] > numeros[k+1]){
                    auxiliar=numeros[k];
                    numeros[k]=numeros[k+1];
                    numeros[k+1]=auxiliar;
                    }
                }

            }

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

        //Guardo los numeros ordenados en el fichero de salida


        ofstream archivoSalida;

        archivoSalida.open(this->direccionFicheroSalida.toStdString()+"/salidaNumeros.txt", ios::out);

        for(int i =0; i<(int)numeros.size(); i++){

            string cadena;
            archivoSalida << std::to_string(numeros[i]);
            archivoSalida << " ";

        }

        archivoSalida.close();


        //FIN DEL BUCLE DE EJECUCIONES

        float media = total/5;

        QString t = QString::number(media);
        t.remove(5, 5);
        t.append(" segundos");

        ui->boxMedia->setText(t);

    }

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
    this->direccionFicheroEntrada = QFileDialog::getOpenFileName(this, tr("Seleccionar archivo"), homeDir);

    QMessageBox::information(this, tr("Nombre"), direccionFicheroEntrada);

}


void ventanaOrdenacion::on_botonDirectorio_2_clicked()
{
    QString homeDir=QDir::homePath ();
    this->direccionFicheroSalida = QFileDialog::getExistingDirectory(this, tr("Seleccionar dinerctorio"), homeDir);

    QMessageBox::information(this, tr("Carpeta"), direccionFicheroSalida);
}

