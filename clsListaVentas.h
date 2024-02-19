#ifndef CLSLISTAVENTAS_H
#define CLSLISTAVENTAS_H
#include <clsNodoVenta.h>

class clsListaVentas{
public:
    clsListaVentas();
    ~clsListaVentas();

    //metodos lista
    clsNodoVenta *getCab() const;
    void setCab(clsNodoVenta *value);
    unsigned short getNVen() const;
    void setNVen(unsigned short value);

    void insertar(clsVenta *venta);
    clsNodoVenta *buscar(QString &value) ;
    double getGananciasTotales();
    double getGananciasTotalesFecha(QDate& inicio,QDate& fin);

private:
    clsNodoVenta *cab;
    unsigned short nVen;

};

#endif // CLSLISTAVENTAS_H
