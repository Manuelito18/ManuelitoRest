#include "clsPersona.h"

Persona::Persona(){

}
Persona::Persona(QString nombre, QString apellidos, unsigned short edad,
                 QString sexo, QString dni){
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->edad = edad;
    this->sexo = sexo;
    this->dni = dni;
}
Persona::~Persona(){

}
QString Persona::getApellidos() const
{
    return apellidos;
}
void Persona::setApellidos(const QString &value)
{
    apellidos = value;
}
unsigned short Persona::getEdad() const
{
    return edad;
}
void Persona::setEdad(unsigned short value)
{
    edad = value;
}
QString Persona::getSexo() const
{
    return sexo;
}
void Persona::setSexo(const QString &value)
{
    sexo = value;
}
QString Persona::getDni() const
{
    return dni;
}
void Persona::setDni(const QString &value)
{
    dni = value;
}
QString Persona::getNombre() const
{
    return nombre;
}
void Persona::setNombre(const QString &value)
{
    nombre = value;
}

