#include "ventanaimagenes.h"
#include "ui_ventanaimagenes.h"
#include "menu.h"
#include <chrono>
#include "string"
//Imagenes
#include <QImage>
#include <QPixmap>

using namespace std;



ventanaImagenes::ventanaImagenes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaImagenes)
{
    ui->setupUi(this);

/////

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

    int i;
    float total;


    //INICIO DEL BUCLE DE EJECUCIONES

    for (i = 0; i < 5; i++) {

        auto comienzo = std::chrono::high_resolution_clock::now();

        //-------------------------------------------------





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


void ventanaImagenes::on_botonResetear_clicked()
{
    ui->boxTiempo1->setText("");
    ui->boxTiempo2->setText("");
    ui->boxTiempo3->setText("");
    ui->boxTiempo4->setText("");
    ui->boxTiempo5->setText("");
    ui->boxMedia->setText("");
}



//El método no puede ir entre los medidores de tiempo, aún no está en blanco y negro y solo se
//puede abrir la imagen de la ruta

void ventanaImagenes::on_abrir_clicked()
{
    int w=ui->labelPic->width(); //Saca el ancho y largo de la etiqueta
    int h=ui->labelPic->height();

    QPixmap pix("C:/Users/anaza/Desktop/.ImagenLorito/rosella.jpg"); //localizacion de la imagen y seleccion de la imafen
    ui->labelPic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));//la imprime
}

