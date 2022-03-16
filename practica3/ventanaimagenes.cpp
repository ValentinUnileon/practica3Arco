#include "ventanaimagenes.h"
#include "ui_ventanaimagenes.h"
#include "menu.h"

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

