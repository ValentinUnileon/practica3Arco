#include "ventanaimagenes.h"
#include "ui_ventanaimagenes.h"

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
