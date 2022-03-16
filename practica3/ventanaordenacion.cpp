#include "ventanaordenacion.h"
#include "ui_ventanaordenacion.h"

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
