#ifndef VENTANAIMAGENES_H
#define VENTANAIMAGENES_H

#include <QMainWindow>

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

private:
    Ui::ventanaImagenes *ui;
};

#endif // VENTANAIMAGENES_H
