#include "clsListaPedido.h"

clsListaPedido::clsListaPedido(){
    this->cab = NULL;
    this->nPed = 0;
}

clsListaPedido::~clsListaPedido(){

}
clsNodoPedido *clsListaPedido::getCab() const{
    return cab;
}

void clsListaPedido::setCab(clsNodoPedido *value){
    cab = value;
}
unsigned short clsListaPedido::getNPed() const{
    return nPed;
}

void clsListaPedido::setNPed(unsigned short value){
    nPed = value;
}

void clsListaPedido::insertar(clsPedido *pe){
    clsNodoPedido *temp = new clsNodoPedido();
    temp->setInfo(pe);
    clsNodoPedido *aux = this->getCab();

    if (aux == NULL) {
        this->setCab(temp);
    } else {
        while (aux->getSgte() != NULL) {
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nPed++;
}



