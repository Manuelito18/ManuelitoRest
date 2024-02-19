#include "clsListaPlatos.h"

clsListaPlatos::clsListaPlatos(){
    this->cab = NULL;
    this->nPla = 0;
}
clsListaPlatos::~clsListaPlatos(){

}
clsNodoPlato *clsListaPlatos::getCab() const{
    return cab;
}
void clsListaPlatos::setCab(clsNodoPlato *value){
    cab = value;
}
unsigned short clsListaPlatos::getNPla() const{
    return nPla;
}
void clsListaPlatos::setNPla(unsigned short value){
    nPla = value;
}
void clsListaPlatos::insertar(clsPlato *pla){
    clsNodoPlato *temp = new clsNodoPlato();
    temp->setInfo(pla);
    clsNodoPlato *aux = this->getCab();

    if (aux == NULL) {
        this->setCab(temp);
    } else {
        while (aux->getSgte() != NULL) {
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nPla++;
}

clsNodoPlato *clsListaPlatos::buscar(QString poto){
    clsNodoPlato *nodoActual = this->cab;
    while (nodoActual != NULL) {
        if (nodoActual->getInfo()->getNombre() == poto) {
            return nodoActual;
        }
        nodoActual = nodoActual->getSgte();
    }
    return NULL; // no se encontro nadaa o no hay nada :/

}
