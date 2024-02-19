#include "formListaClientes.h"
#include "ui_formListaClientes.h"

formListaClientes::formListaClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formListaClientes){
    ui->setupUi(this);
}

formListaClientes::~formListaClientes(){
    delete ui;
}
clsRestaurante *formListaClientes::getRes() const{
    return res;
}
void formListaClientes::setRes(clsRestaurante *value){
    res = value;
}
void formListaClientes::actualizarTabla(){
    clsNodoCliente *aux = this->getRes()->getLC()->getCab();
    int row = 0;
    ui->tablaClientes->clearContents();
    int rowCount = ui->tablaClientes->rowCount();
    if (rowCount < this->getRes()->getLC()->getNCli()) {
        ui->tablaClientes->setRowCount(this->getRes()->getLC()->getNCli());
    }

    while (aux != NULL && row < this->getRes()->getLC()->getNCli()) {
        ui->tablaClientes->setItem(row, 0, new QTableWidgetItem(aux->getInfo()->getCodigo()));
        ui->tablaClientes->setItem(row, 1, new QTableWidgetItem(aux->getInfo()->getNombre()));
        ui->tablaClientes->setItem(row, 2, new QTableWidgetItem(aux->getInfo()->getApellidos()));
        ui->tablaClientes->setItem(row, 4, new QTableWidgetItem(aux->getInfo()->getSexo()));
        aux = aux->getSgte();
        row++;
    }
}


void formListaClientes::on_pbCerrar_clicked(){
    this->close();
}
