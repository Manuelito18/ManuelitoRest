#include "MainWindow.h"
#include <QApplication>
#include <formLogin.h>
#include <clsRestaurante.h>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    clsRestaurante *res = new clsRestaurante();
    res->cargarDatos();

    formLogin f;
    f.setRes(res);
    f.show();
    return a.exec();
}
