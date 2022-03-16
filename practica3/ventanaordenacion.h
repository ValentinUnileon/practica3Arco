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

private:
    Ui::ventanaOrdenacion *ui;
};

#endif // VENTANAORDENACION_H
