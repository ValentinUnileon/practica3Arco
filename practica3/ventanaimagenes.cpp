#include "ventanaimagenes.h"
#include "ui_ventanaimagenes.h"
#include "menu.h"
#include <chrono>
#include "string"
//Imagenes
#include <QImage>
#include <QPixmap>
#include <fstream>

using namespace std;

#include <opencv2/opencv.hpp>

using namespace cv;




ventanaImagenes::ventanaImagenes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaImagenes)
{
    ui->setupUi(this);


}

ventanaImagenes::~ventanaImagenes()
{
    delete ui;
}

void ventanaImagenes::on_botonVolver_clicked()
{
    menu *m = new menu();

    m->show();

    this->close();
}


void ventanaImagenes::on_botonEjecutar_clicked()
{

    if(this->direccionFicheroEntrada=="" || this->direccionFicheroSalida==""){

        QMessageBox::information(this, tr("Error"), "Asegurate de seleccionar la direccion de entrada y salida");

    }else{

        int i;
        float total;


        //INICIO DEL BUCLE DE EJECUCIONES

        for (i = 0; i < 5; i++) {

            auto comienzo = std::chrono::high_resolution_clock::now();

            //-------------------------------------------------

            QImage imagen;
            imagen.load(this->direccionFicheroEntrada);


            for(int i=0; i< imagen.width(); i++){
                for(int j=0; j< imagen.height(); j++){

                    QRgb rgb = imagen.pixel(i, j);
                    int r = qRed(rgb);
                    int g = qGreen(rgb);
                    int b = qBlue(rgb);
                    int gray = (r + g + b) / 3;

                    imagen.setPixel(i, j, qRgb(gray, gray, gray));

                }
            }

            imagen.save(this->direccionFicheroSalida+"/imagenSalida.jpg");


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

}


void ventanaImagenes::on_botonResetear_clicked()
{
    ui->boxTiempo1->setText("");
    ui->boxTiempo2->setText("");
    ui->boxTiempo3->setText("");
    ui->boxTiempo4->setText("");
    ui->boxTiempo5->setText("");
    ui->boxMedia->setText("");
}




void ventanaImagenes::on_botonDirectorio_clicked()
{

    QString homeDir=QDir::homePath ();
    this->direccionFicheroEntrada = QFileDialog::getOpenFileName(this, tr("Seleccionar archivo"), homeDir);

    if(this->direccionFicheroEntrada!=""){
       QMessageBox::information(this, tr("Nombre"), direccionFicheroEntrada);
    }


}


void ventanaImagenes::on_botonDirectorio_2_clicked()
{
    QString homeDir=QDir::homePath ();
    this->direccionFicheroSalida = QFileDialog::getExistingDirectory(this, tr("Seleccionar dinerctorio"), homeDir);

    if(this->direccionFicheroSalida!=""){
        QMessageBox::information(this, tr("Carpeta"), direccionFicheroSalida);
    }

}

