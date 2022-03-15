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
    cout<<"hola que tal";
    return a.exec();

}
