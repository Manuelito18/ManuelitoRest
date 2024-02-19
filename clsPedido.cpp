#include "clsPedido.h"

clsPedido::clsPedido(){
    this->cantidad = 0;
    this->precioTotal = 0;
    this->plato = NULL;
}

clsPedido::~clsPedido(){

}
QString clsPedido::getNombrePlato() const{
    return nombrePlato;
}

void clsPedido::setNombrePlato(const QString &value){
    nombrePlato = value;
}
unsigned short clsPedido::getCantidad() const{
    return cantidad;
}

void clsPedido::setCantidad(unsigned short value){
    cantidad = value;
}
double clsPedido::getPrecioTotal() const{
    return precioTotal;
}

void clsPedido::setPrecioTotal(double value){
    precioTotal = value;
}
clsPlato *clsPedido::getPlato() const
{
    return plato;
}

void clsPedido::setPlato(clsPlato *value)
{
    plato = value;
}





