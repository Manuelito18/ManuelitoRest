#include "clsListaVentas.h"

clsListaVentas::clsListaVentas(){
    this->cab = NULL;
    this->nVen = 0;
}
clsListaVentas::~clsListaVentas(){

}
clsNodoVenta *clsListaVentas::getCab() const{
    return cab;
}
void clsListaVentas::setCab(clsNodoVenta *value){
    cab = value;
}
unsigned short clsListaVentas::getNVen() const{
    return nVen;
}
void clsListaVentas::setNVen(unsigned short value){
    nVen = value;
}
void clsListaVentas::insertar(clsVenta *venta){
    clsNodoVenta *temp = new clsNodoVenta(venta);
    //temp->setSgte(NULL);
    if(this->cab == NULL){
        this->cab = temp;
    }else{
        clsNodoVenta *aux = this->cab;
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nVen++;
}
clsNodoVenta *clsListaVentas::buscar(QString &value){
//    clsNodoVenta *aux = this->cab;

//    while (aux != NULL) {
//        if (/*faltan los metodos de*/) {
//            return aux;
//        }
//        aux = aux->getSgte();
//    }
//    return NULL; // NO hay datos o no se encontro

}
double clsListaVentas::getGananciasTotales(){

}
double clsListaVentas::getGananciasTotalesFecha(QDate &inicio, QDate &fin){

}




