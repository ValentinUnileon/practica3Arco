#ifndef VENTANAORDENACION_H
#define VENTANAORDENACION_H

#include <QMainWindow>

namespace Ui {
class ventanaOrdenacion;
}

class ventanaOrdenacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaOrdenacion(QWidget *parent = nullptr);
    ~ventanaOrdenacion();

private slots:
    void on_botonVolver_clicked();

    void on_botonEjecutar_clicked();

    void on_botonResetear_clicked();

    void on_botonDirectorio_clicked();

private:
    Ui::ventanaOrdenacion *ui;
    QString direccionFichero;
};

#endif // VENTANAORDENACION_H
