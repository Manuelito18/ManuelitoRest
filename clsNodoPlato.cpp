#include "clsNodoPlato.h"

clsNodoPlato::clsNodoPlato(){
    this->info = NULL;
    this->sgte = NULL;
}
clsNodoPlato::clsNodoPlato(clsPlato *pla){
    this->info = pla;
    this->sgte = NULL;
}
clsNodoPlato::~clsNodoPlato(){
    this->info = NULL;
    this->sgte = NULL;
}
clsNodoPlato *clsNodoPlato::getSgte() const
{
    return sgte;
}
void clsNodoPlato::setSgte(clsNodoPlato *value)
{
    sgte = value;
}
clsPlato *clsNodoPlato::getInfo() const
{
    return info;
}
void clsNodoPlato::setInfo(clsPlato *value)
{
    info = value;
}



