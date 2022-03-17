#ifndef VENTANAIMAGENES_H
#define VENTANAIMAGENES_H

#include <QMainWindow>
///Imagenes
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <QGuiApplication>
/////////

namespace Ui {
class ventanaImagenes;
}

class ventanaImagenes : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaImagenes(QWidget *parent = nullptr);
    ~ventanaImagenes();

private slots:
    void on_botonVolver_clicked();

    void on_botonEjecutar_clicked();

    void on_botonResetear_clicked();



    void on_abrir_clicked();

private:
    Ui::ventanaImagenes *ui;

    //Guardar ruta
QString runPath;
QString hglpName;
QString hglpPath;
};

#endif // VENTANAIMAGENES_H
