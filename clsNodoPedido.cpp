#include "clsNodoPedido.h"

clsNodoPedido::clsNodoPedido(){
    this->info = NULL;
    this->sgte = NULL;
}

clsNodoPedido::~clsNodoPedido(){

}
clsNodoPedido *clsNodoPedido::getSgte() const{
    return sgte;
}

void clsNodoPedido::setSgte(clsNodoPedido *value){
    sgte = value;
}
clsPedido *clsNodoPedido::getInfo() const{
    return info;
}

void clsNodoPedido::setInfo(clsPedido *value){
    info = value;
}



