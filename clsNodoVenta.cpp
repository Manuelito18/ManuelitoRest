#include "clsNodoVenta.h"

clsNodoVenta::clsNodoVenta(){
    this->info =NULL;
    this->sgte = NULL;
}
clsNodoVenta::clsNodoVenta(clsVenta *ven){
    this->info = ven;
    this->sgte = NULL;
}
clsNodoVenta::~clsNodoVenta(){

}
clsNodoVenta *clsNodoVenta::getSgte() const{
    return sgte;
}
void clsNodoVenta::setSgte(clsNodoVenta *value){
    sgte = value;
}
clsVenta *clsNodoVenta::getInfo() const{
    return info;
}
void clsNodoVenta::setInfo(clsVenta *value){
    info = value;
}



