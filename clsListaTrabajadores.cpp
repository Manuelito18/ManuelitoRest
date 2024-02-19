#include "clsListaTrabajadores.h"

clsListaTrabajadores::clsListaTrabajadores(){
    this->setCab(NULL);
    this->setNTra(0);
}
clsListaTrabajadores::~clsListaTrabajadores(){

}
clsNodoTrabajador *clsListaTrabajadores::getCab() const{
    return cab;
}
void clsListaTrabajadores::setCab(clsNodoTrabajador *value){
    cab = value;
}
unsigned short clsListaTrabajadores::getNTra() const{
    return nTra;
}
void clsListaTrabajadores::setNTra(unsigned short value){
    nTra = value;
}

void clsListaTrabajadores::insertar(clsTrabajador *tra) {
    clsNodoTrabajador *temp = new clsNodoTrabajador();
    temp->setInfo(tra);
    clsNodoTrabajador *aux = this->getCab();

    if (aux == NULL) {
        this->setCab(temp);
    } else {
        while (aux->getSgte() != NULL) {
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nTra++;
}

clsNodoTrabajador *clsListaTrabajadores::buscar(QString nombre){
    clsNodoTrabajador *nodoActual = this->cab;
    while (nodoActual != NULL) {
        if (nodoActual->getInfo()->getNombre() == nombre) {
            return nodoActual;
        }
        nodoActual = nodoActual->getSgte();
    }
    return NULL; // no se encontro nadaa o no hay nada :/
}
