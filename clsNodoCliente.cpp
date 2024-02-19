#include "clsNodoCliente.h"

clsNodoCliente::clsNodoCliente(){
    this->info = NULL;
    this->sgte = NULL;
}
clsNodoCliente::clsNodoCliente(clsCliente *cli){
    this->info = cli;
    this->sgte = NULL;
}
clsNodoCliente::~clsNodoCliente(){

}
clsNodoCliente *clsNodoCliente::getSgte() const{
    return sgte;
}
void clsNodoCliente::setSgte(clsNodoCliente *value){
    sgte = value;
}
clsCliente *clsNodoCliente::getInfo() const{
    return info;
}
void clsNodoCliente::setInfo(clsCliente *value){
    info = value;
}



