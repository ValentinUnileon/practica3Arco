/********************************************************************************
** Form generated from reading UI file 'ventanaordenacion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAORDENACION_H
#define UI_VENTANAORDENACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaOrdenacion
{
public:
    QWidget *centralwidget;
    QTextBrowser *boxTiempo1;
    QLabel *labelTiempo1;
    QLabel *labelTiempo2;
    QTextBrowser *boxTiempo2;
    QLabel *labelTiempo3;
    QTextBrowser *boxTiempo3;
    QLabel *labelTiempo4;
    QTextBrowser *boxTiempo4;
    QLabel *labelTiempo5;
    QTextBrowser *boxTiempo5;
    QPushButton *botonEjecutar;
    QTextBrowser *boxMedia;
    QLabel *labelMedia;
    QPushButton *botonResetear;
    QPushButton *botonVolver;
    QLabel *labelTitulo;
    QFrame *linea1;
    QPushButton *botonDirectorio;
    QPushButton *botonDirectorio_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaOrdenacion)
    {
        if (ventanaOrdenacion->objectName().isEmpty())
            ventanaOrdenacion->setObjectName(QString::fromUtf8("ventanaOrdenacion"));
        ventanaOrdenacion->resize(400, 560);
        centralwidget = new QWidget(ventanaOrdenacion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        boxTiempo1 = new QTextBrowser(centralwidget);
        boxTiempo1->setObjectName(QString::fromUtf8("boxTiempo1"));
        boxTiempo1->setGeometry(QRect(110, 233, 131, 31));
        labelTiempo1 = new QLabel(centralwidget);
        labelTiempo1->setObjectName(QString::fromUtf8("labelTiempo1"));
        labelTiempo1->setGeometry(QRect(40, 240, 61, 16));
        labelTiempo2 = new QLabel(centralwidget);
        labelTiempo2->setObjectName(QString::fromUtf8("labelTiempo2"));
        labelTiempo2->setGeometry(QRect(40, 280, 61, 16));
        boxTiempo2 = new QTextBrowser(centralwidget);
        boxTiempo2->setObjectName(QString::fromUtf8("boxTiempo2"));
        boxTiempo2->setGeometry(QRect(110, 273, 131, 31));
        labelTiempo3 = new QLabel(centralwidget);
        labelTiempo3->setObjectName(QString::fromUtf8("labelTiempo3"));
        labelTiempo3->setGeometry(QRect(40, 320, 61, 16));
        boxTiempo3 = new QTextBrowser(centralwidget);
        boxTiempo3->setObjectName(QString::fromUtf8("boxTiempo3"));
        boxTiempo3->setGeometry(QRect(110, 313, 131, 31));
        labelTiempo4 = new QLabel(centralwidget);
        labelTiempo4->setObjectName(QString::fromUtf8("labelTiempo4"));
        labelTiempo4->setGeometry(QRect(40, 360, 61, 16));
        boxTiempo4 = new QTextBrowser(centralwidget);
        boxTiempo4->setObjectName(QString::fromUtf8("boxTiempo4"));
        boxTiempo4->setGeometry(QRect(110, 353, 131, 31));
        labelTiempo5 = new QLabel(centralwidget);
        labelTiempo5->setObjectName(QString::fromUtf8("labelTiempo5"));
        labelTiempo5->setGeometry(QRect(40, 400, 61, 16));
        boxTiempo5 = new QTextBrowser(centralwidget);
        boxTiempo5->setObjectName(QString::fromUtf8("boxTiempo5"));
        boxTiempo5->setGeometry(QRect(110, 440, 131, 31));
        botonEjecutar = new QPushButton(centralwidget);
        botonEjecutar->setObjectName(QString::fromUtf8("botonEjecutar"));
        botonEjecutar->setGeometry(QRect(40, 170, 111, 31));
        boxMedia = new QTextBrowser(centralwidget);
        boxMedia->setObjectName(QString::fromUtf8("boxMedia"));
        boxMedia->setGeometry(QRect(110, 400, 131, 31));
        labelMedia = new QLabel(centralwidget);
        labelMedia->setObjectName(QString::fromUtf8("labelMedia"));
        labelMedia->setGeometry(QRect(40, 450, 61, 16));
        botonResetear = new QPushButton(centralwidget);
        botonResetear->setObjectName(QString::fromUtf8("botonResetear"));
        botonResetear->setGeometry(QRect(20, 490, 111, 31));
        botonVolver = new QPushButton(centralwidget);
        botonVolver->setObjectName(QString::fromUtf8("botonVolver"));
        botonVolver->setGeometry(QRect(190, 490, 111, 31));
        labelTitulo = new QLabel(centralwidget);
        labelTitulo->setObjectName(QString::fromUtf8("labelTitulo"));
        labelTitulo->setGeometry(QRect(40, 30, 331, 51));
        QFont font;
        font.setPointSize(12);
        labelTitulo->setFont(font);
        linea1 = new QFrame(centralwidget);
        linea1->setObjectName(QString::fromUtf8("linea1"));
        linea1->setGeometry(QRect(40, 70, 221, 16));
        linea1->setFrameShape(QFrame::HLine);
        linea1->setFrameShadow(QFrame::Sunken);
        botonDirectorio = new QPushButton(centralwidget);
        botonDirectorio->setObjectName(QString::fromUtf8("botonDirectorio"));
        botonDirectorio->setGeometry(QRect(40, 90, 111, 61));
        botonDirectorio_2 = new QPushButton(centralwidget);
        botonDirectorio_2->setObjectName(QString::fromUtf8("botonDirectorio_2"));
        botonDirectorio_2->setGeometry(QRect(220, 90, 111, 61));
        ventanaOrdenacion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ventanaOrdenacion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 17));
        ventanaOrdenacion->setMenuBar(menubar);
        statusbar = new QStatusBar(ventanaOrdenacion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaOrdenacion->setStatusBar(statusbar);

        retranslateUi(ventanaOrdenacion);

        QMetaObject::connectSlotsByName(ventanaOrdenacion);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaOrdenacion)
    {
        ventanaOrdenacion->setWindowTitle(QCoreApplication::translate("ventanaOrdenacion", "MainWindow", nullptr));
        labelTiempo1->setText(QCoreApplication::translate("ventanaOrdenacion", "Tiempo 1:", nullptr));
        labelTiempo2->setText(QCoreApplication::translate("ventanaOrdenacion", "Tiempo 2:", nullptr));
        labelTiempo3->setText(QCoreApplication::translate("ventanaOrdenacion", "Tiempo3:", nullptr));
        labelTiempo4->setText(QCoreApplication::translate("ventanaOrdenacion", "Tiempo 4:", nullptr));
        labelTiempo5->setText(QCoreApplication::translate("ventanaOrdenacion", "Tiempo 5:", nullptr));
        botonEjecutar->setText(QCoreApplication::translate("ventanaOrdenacion", "Ejecutar", nullptr));
        labelMedia->setText(QCoreApplication::translate("ventanaOrdenacion", "MEDIA:", nullptr));
        botonResetear->setText(QCoreApplication::translate("ventanaOrdenacion", "Resetear", nullptr));
        botonVolver->setText(QCoreApplication::translate("ventanaOrdenacion", "Volver", nullptr));
        labelTitulo->setText(QCoreApplication::translate("ventanaOrdenacion", "ORDENACION POR BURBUJA", nullptr));
        botonDirectorio->setText(QCoreApplication::translate("ventanaOrdenacion", "Seleccion fichero \n"
"de entrada", nullptr));
        botonDirectorio_2->setText(QCoreApplication::translate("ventanaOrdenacion", "Seleccion directorio \n"
"de salida", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaOrdenacion: public Ui_ventanaOrdenacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAORDENACION_H
