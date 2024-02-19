#include "clsVenta.h"

clsVenta::clsVenta(){
    this->cli = NULL;
    this->venta = NULL;
}

clsVenta::~clsVenta(){

}
QString clsVenta::getCodigo() const
{
    return codigo;
}

void clsVenta::setCodigo(const QString &value)
{
    codigo = value;
}
QString clsVenta::getNombreTraba() const
{
    return nombreTraba;
}

void clsVenta::setNombreTraba(const QString &value)
{
    nombreTraba = value;
}
QDate clsVenta::getFecha() const
{
    return fecha;
}

void clsVenta::setFecha(const QDate &value)
{
    fecha = value;
}
clsCliente *clsVenta::getCli() const
{
    return cli;
}

void clsVenta::setCli(clsCliente *value)
{
    cli = value;
}
clsListaPedido *clsVenta::getVenta() const
{
    return venta;
}

void clsVenta::setVenta(clsListaPedido *value)
{
    venta = value;
}
float clsVenta::getIgv() const
{
    return igv;
}

void clsVenta::setIgv(float value)
{
    igv = value;
}
double clsVenta::getSubTotal() const
{
    return subTotal;
}

void clsVenta::setSubTotal(double value)
{
    subTotal = value;
}
double clsVenta::getTotal() const
{
    return total;
}

void clsVenta::setTotal(double value)
{
    total = value;
}









