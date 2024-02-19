#include "clsListaClientes.h"

clsListaClientes::clsListaClientes(){
    this->cab = NULL;
    this->nCli = 0;
}

clsListaClientes::~clsListaClientes(){

}
clsNodoCliente *clsListaClientes::getCab() const{
    return cab;
}
void clsListaClientes::setCab(clsNodoCliente *value){
    cab = value;
}
unsigned short clsListaClientes::getNCli() const{
    return nCli;
}
void clsListaClientes::setNCli(unsigned short value){
    nCli = value;
}
void clsListaClientes::insertar(clsCliente *cli){
    clsNodoCliente *temp = new clsNodoCliente();
    temp->setInfo(cli);
    clsNodoCliente *aux = this->getCab();

    if (aux == NULL) {
        this->setCab(temp);
    } else {
        while (aux->getSgte() != NULL) {
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nCli++;
}
clsNodoCliente *clsListaClientes::buscar(QString nombre){
    clsNodoCliente *nodoActual = this->cab;
    while (nodoActual != NULL) {
        if (nodoActual->getInfo()->getNombre() == nombre) {
            return nodoActual;
        }
        nodoActual = nodoActual->getSgte();
    }
    return NULL; // no se encontro nadaa o no hay nada :/
}
