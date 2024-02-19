#include "clsTrabajador.h"

clsTrabajador::clsTrabajador()
{

}
clsTrabajador::clsTrabajador(QString nombre, unsigned short edad, QString sexo, QString dni, double sueldo, QString tipoTrabajador){
    this->nombre = nombre;
    this->edad = edad;
    this->sexo = sexo;
    this->dni = dni;
    this->sueldo = sueldo;
    this->tipoTrabajador = tipoTrabajador;
}
clsTrabajador::~clsTrabajador(){

}
QString clsTrabajador::getNombre() const
{
    return nombre;
}

void clsTrabajador::setNombre(const QString &value)
{
    nombre = value;
}
unsigned short clsTrabajador::getEdad() const
{
    return edad;
}

void clsTrabajador::setEdad(unsigned short value)
{
    edad = value;
}
QString clsTrabajador::getSexo() const
{
    return sexo;
}

void clsTrabajador::setSexo(const QString &value)
{
    sexo = value;
}
QString clsTrabajador::getDni() const
{
    return dni;
}

void clsTrabajador::setDni(const QString &value)
{
    dni = value;
}
double clsTrabajador::getSueldo() const
{
    return sueldo;
}

void clsTrabajador::setSueldo(double value)
{
    sueldo = value;
}
QString clsTrabajador::getTipoTrabajador() const
{
    return tipoTrabajador;
}

void clsTrabajador::setTipoTrabajador(const QString &value)
{
    tipoTrabajador = value;
}
QString clsTrabajador::getCodigo() const
{
    return codigo;
}

void clsTrabajador::setCodigo(const QString &value)
{
    codigo = value;
}
QString clsTrabajador::getApellidos() const
{
    return apellidos;
}

void clsTrabajador::setApellidos(const QString &value)
{
    apellidos = value;
}















