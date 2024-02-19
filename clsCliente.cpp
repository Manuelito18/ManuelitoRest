#include "clsCliente.h"


QString clsCliente::getCodigo() const
{
    return codigo;
}

void clsCliente::setCodigo(const QString &value)
{
    codigo = value;
}
clsCliente::clsCliente(){
    
}

clsCliente::clsCliente(QString nombre, QString apellidos,
                       unsigned short edad, QString sexo,
                       QString dni, QString codigo):Persona(nombre,apellidos,edad,sexo,dni){
    this->codigo = codigo;
}

clsCliente::~clsCliente(){

}

