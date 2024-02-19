#include "clsPlato.h"

clsPlato::clsPlato(){
    this->setPrecio(0.00);
    this->setStock(0);
}

clsPlato::clsPlato(QString codigo, QString nombre, QString categoria, QString descripcion, float precio, unsigned short stock){
    this->setCodigo(codigo);
    this->setNombre(nombre);
    this->setCategoria(categoria);
    this->setDescripcion(descripcion);
    this->setPrecio(precio);
    this->setStock(stock);
}

clsPlato::~clsPlato(){

}
QString clsPlato::getNombre() const{
    return nombre;
}
void clsPlato::setNombre(const QString &value){
    nombre = value;
}
QString clsPlato::getDescripcion() const{
    return descripcion;
}
void clsPlato::setDescripcion(const QString &value){
    descripcion = value;
}
float clsPlato::getPrecio() const{
    return precio;
}
void clsPlato::setPrecio(float value){
    precio = value;
}
unsigned short clsPlato::getStock() const{
    return stock;
}
void clsPlato::setStock(unsigned short value){
    stock = value;
}
QString clsPlato::getCodigo() const
{
    return codigo;
}

void clsPlato::setCodigo(const QString &value)
{
    codigo = value;
}
QString clsPlato::getCategoria() const
{
    return categoria;
}

void clsPlato::setCategoria(const QString &value)
{
    categoria = value;
}







