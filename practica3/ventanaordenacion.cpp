#include "ventanaordenacion.h"
#include "ui_ventanaordenacion.h"
#include "menu.h"

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

