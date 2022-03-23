/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QPushButton *botonOrdenacion;
    QPushButton *botonImagen;
    QLabel *label1;
    QPushButton *botonCerrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(310, 310);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        botonOrdenacion = new QPushButton(centralwidget);
        botonOrdenacion->setObjectName(QString::fromUtf8("botonOrdenacion"));
        botonOrdenacion->setGeometry(QRect(80, 50, 171, 51));
        botonImagen = new QPushButton(centralwidget);
        botonImagen->setObjectName(QString::fromUtf8("botonImagen"));
        botonImagen->setGeometry(QRect(80, 120, 171, 51));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 10, 221, 20));
        QFont font;
        font.setPointSize(12);
        label1->setFont(font);
        botonCerrar = new QPushButton(centralwidget);
        botonCerrar->setObjectName(QString::fromUtf8("botonCerrar"));
        botonCerrar->setGeometry(QRect(80, 220, 111, 31));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 310, 17));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "menu", nullptr));
        botonOrdenacion->setText(QCoreApplication::translate("menu", "ORDENACI\303\223N POR BURBUJA", nullptr));
        botonImagen->setText(QCoreApplication::translate("menu", "IMAGEN A BLANCO Y NEGRO", nullptr));
        label1->setText(QCoreApplication::translate("menu", "SELECCIONE UN ALGORITMO:", nullptr));
        botonCerrar->setText(QCoreApplication::translate("menu", "Cerrar aplicaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
