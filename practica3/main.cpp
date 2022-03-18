#include "menu.h"

#include <QApplication>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    menu w;
    w.show();

    //modificacion con suavidad
    return a.exec();

}
