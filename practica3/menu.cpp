#include "menu.h"
#include "ui_menu.h"
#include "ventanaimagenes.h"
#include "ventanaordenacion.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}


void menu::on_botonOrdenacion_clicked()
{
    ventanaOrdenacion *v = new ventanaOrdenacion();

    v->show();
    this->close();
}


void menu::on_botonImagen_clicked()
{
    ventanaImagenes *v = new ventanaImagenes();

    v->show();

    this->close();
}


void menu::on_botonCerrar_clicked()
{
    this->close();
}

