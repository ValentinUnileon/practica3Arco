#ifndef VENTANAIMAGENES_H
#define VENTANAIMAGENES_H
using namespace std;


#include <QMainWindow>
///Imagenes
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <QGuiApplication>
/////////
///
#include <QImage>
#include <QColor>
#include <QPixmap>

namespace Ui {
class ventanaImagenes;
}

class ventanaImagenes : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaImagenes(QWidget *parent = nullptr);
    ~ventanaImagenes();
    /////
        ventanaImagenes(QString imgPath);

        QImage* grayScaleImg();
        int Otsu(QImage* img);
        QImage* process(QImage* img);
        int     threshold;

private slots:
    void on_botonVolver_clicked();

    void on_botonEjecutar_clicked();

    void on_botonResetear_clicked();


private:
    QImage* _img;

    vector<int> Histogram(QImage* img);

    Ui::ventanaImagenes *ui;

    //Guardar ruta
QString runPath;
QString hglpName;
QString hglpPath;
};

#endif // VENTANAIMAGENES_H
