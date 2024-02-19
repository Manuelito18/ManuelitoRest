#include "clsNodoTrabajador.h"

clsNodoTrabajador::clsNodoTrabajador()
{
    this->info = NULL;
    this->sgte = NULL;
}

clsNodoTrabajador::clsNodoTrabajador(clsTrabajador *tra)
{
    this->info = tra;
    this->sgte = NULL;
}

clsNodoTrabajador::~clsNodoTrabajador()
{

}
clsNodoTrabajador *clsNodoTrabajador::getSgte() const
{
    return sgte;
}

void clsNodoTrabajador::setSgte(clsNodoTrabajador *value)
{
    sgte = value;
}
clsTrabajador *clsNodoTrabajador::getInfo() const
{
    return info;
}

void clsNodoTrabajador::setInfo(clsTrabajador *value)
{
    info = value;
}



