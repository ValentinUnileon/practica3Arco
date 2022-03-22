/********************************************************************************
** Form generated from reading UI file 'ventanaimagenes.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAIMAGENES_H
#define UI_VENTANAIMAGENES_H

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

class Ui_ventanaImagenes
{
public:
    QWidget *centralwidget;
    QTextBrowser *boxMedia;
    QTextBrowser *boxTiempo3;
    QTextBrowser *boxTiempo2;
    QTextBrowser *boxTiempo5;
    QPushButton *botonEjecutar;
    QTextBrowser *boxTiempo4;
    QPushButton *botonResetear;
    QTextBrowser *boxTiempo1;
    QPushButton *botonDirectorio;
    QPushButton *botonVolver;
    QLabel *labelMedia;
    QLabel *labelTiempo2;
    QLabel *labelTiempo3;
    QLabel *labelTiempo1;
    QLabel *labelTiempo4;
    QLabel *labelTiempo5;
    QLabel *labelTitulo;
    QFrame *linea1;
    QLabel *labelPic;
    QPushButton *botonDirectorio_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaImagenes)
    {
        if (ventanaImagenes->objectName().isEmpty())
            ventanaImagenes->setObjectName(QString::fromUtf8("ventanaImagenes"));
        ventanaImagenes->resize(406, 478);
        centralwidget = new QWidget(ventanaImagenes);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        boxMedia = new QTextBrowser(centralwidget);
        boxMedia->setObjectName(QString::fromUtf8("boxMedia"));
        boxMedia->setGeometry(QRect(90, 357, 131, 31));
        boxTiempo3 = new QTextBrowser(centralwidget);
        boxTiempo3->setObjectName(QString::fromUtf8("boxTiempo3"));
        boxTiempo3->setGeometry(QRect(90, 183, 131, 31));
        boxTiempo2 = new QTextBrowser(centralwidget);
        boxTiempo2->setObjectName(QString::fromUtf8("boxTiempo2"));
        boxTiempo2->setGeometry(QRect(90, 143, 131, 31));
        boxTiempo5 = new QTextBrowser(centralwidget);
        boxTiempo5->setObjectName(QString::fromUtf8("boxTiempo5"));
        boxTiempo5->setGeometry(QRect(90, 263, 131, 31));
        botonEjecutar = new QPushButton(centralwidget);
        botonEjecutar->setObjectName(QString::fromUtf8("botonEjecutar"));
        botonEjecutar->setGeometry(QRect(100, 310, 111, 31));
        boxTiempo4 = new QTextBrowser(centralwidget);
        boxTiempo4->setObjectName(QString::fromUtf8("boxTiempo4"));
        boxTiempo4->setGeometry(QRect(90, 223, 131, 31));
        botonResetear = new QPushButton(centralwidget);
        botonResetear->setObjectName(QString::fromUtf8("botonResetear"));
        botonResetear->setGeometry(QRect(100, 404, 111, 31));
        boxTiempo1 = new QTextBrowser(centralwidget);
        boxTiempo1->setObjectName(QString::fromUtf8("boxTiempo1"));
        boxTiempo1->setGeometry(QRect(90, 103, 131, 31));
        botonDirectorio = new QPushButton(centralwidget);
        botonDirectorio->setObjectName(QString::fromUtf8("botonDirectorio"));
        botonDirectorio->setGeometry(QRect(250, 100, 111, 61));
        botonVolver = new QPushButton(centralwidget);
        botonVolver->setObjectName(QString::fromUtf8("botonVolver"));
        botonVolver->setGeometry(QRect(250, 404, 111, 31));
        labelMedia = new QLabel(centralwidget);
        labelMedia->setObjectName(QString::fromUtf8("labelMedia"));
        labelMedia->setGeometry(QRect(44, 363, 41, 16));
        labelTiempo2 = new QLabel(centralwidget);
        labelTiempo2->setObjectName(QString::fromUtf8("labelTiempo2"));
        labelTiempo2->setGeometry(QRect(30, 150, 61, 16));
        labelTiempo3 = new QLabel(centralwidget);
        labelTiempo3->setObjectName(QString::fromUtf8("labelTiempo3"));
        labelTiempo3->setGeometry(QRect(30, 190, 61, 16));
        labelTiempo1 = new QLabel(centralwidget);
        labelTiempo1->setObjectName(QString::fromUtf8("labelTiempo1"));
        labelTiempo1->setGeometry(QRect(30, 110, 61, 16));
        labelTiempo4 = new QLabel(centralwidget);
        labelTiempo4->setObjectName(QString::fromUtf8("labelTiempo4"));
        labelTiempo4->setGeometry(QRect(30, 230, 61, 16));
        labelTiempo5 = new QLabel(centralwidget);
        labelTiempo5->setObjectName(QString::fromUtf8("labelTiempo5"));
        labelTiempo5->setGeometry(QRect(30, 270, 61, 16));
        labelTitulo = new QLabel(centralwidget);
        labelTitulo->setObjectName(QString::fromUtf8("labelTitulo"));
        labelTitulo->setGeometry(QRect(30, 30, 331, 51));
        QFont font;
        font.setPointSize(12);
        labelTitulo->setFont(font);
        linea1 = new QFrame(centralwidget);
        linea1->setObjectName(QString::fromUtf8("linea1"));
        linea1->setGeometry(QRect(30, 80, 211, 16));
        linea1->setFrameShape(QFrame::HLine);
        linea1->setFrameShadow(QFrame::Sunken);
        labelPic = new QLabel(centralwidget);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setGeometry(QRect(380, 210, 161, 151));
        botonDirectorio_2 = new QPushButton(centralwidget);
        botonDirectorio_2->setObjectName(QString::fromUtf8("botonDirectorio_2"));
        botonDirectorio_2->setGeometry(QRect(250, 180, 111, 61));
        ventanaImagenes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ventanaImagenes);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 406, 21));
        ventanaImagenes->setMenuBar(menubar);
        statusbar = new QStatusBar(ventanaImagenes);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaImagenes->setStatusBar(statusbar);

        retranslateUi(ventanaImagenes);

        QMetaObject::connectSlotsByName(ventanaImagenes);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaImagenes)
    {
        ventanaImagenes->setWindowTitle(QCoreApplication::translate("ventanaImagenes", "MainWindow", nullptr));
        botonEjecutar->setText(QCoreApplication::translate("ventanaImagenes", "Ejecutar", nullptr));
        botonResetear->setText(QCoreApplication::translate("ventanaImagenes", "Resetear", nullptr));
        botonDirectorio->setText(QCoreApplication::translate("ventanaImagenes", "Seleccionar \n"
" imagen", nullptr));
        botonVolver->setText(QCoreApplication::translate("ventanaImagenes", "Volver", nullptr));
        labelMedia->setText(QCoreApplication::translate("ventanaImagenes", "Media:", nullptr));
        labelTiempo2->setText(QCoreApplication::translate("ventanaImagenes", "Tiempo 2:", nullptr));
        labelTiempo3->setText(QCoreApplication::translate("ventanaImagenes", "Tiempo3:", nullptr));
        labelTiempo1->setText(QCoreApplication::translate("ventanaImagenes", "Tiempo 1:", nullptr));
        labelTiempo4->setText(QCoreApplication::translate("ventanaImagenes", "Tiempo 4:", nullptr));
        labelTiempo5->setText(QCoreApplication::translate("ventanaImagenes", "Tiempo 5:", nullptr));
        labelTitulo->setText(QCoreApplication::translate("ventanaImagenes", "ALGORITMO 2: \n"
"IMAGENES A BLANCO Y NEGRO", nullptr));
        labelPic->setText(QString());
        botonDirectorio_2->setText(QCoreApplication::translate("ventanaImagenes", "Seleccionar \n"
" directorio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaImagenes: public Ui_ventanaImagenes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAIMAGENES_H
