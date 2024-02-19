#include "formListaPlatos.h"
#include "ui_formListaPlatos.h"

formListaPlatos::formListaPlatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formListaPlatos){
    ui->setupUi(this);
}
formListaPlatos::~formListaPlatos(){
    delete ui;
}
clsRestaurante *formListaPlatos::getRes() const{
    return res;
}
void formListaPlatos::setRes(clsRestaurante *value){
    res = value;
}
void formListaPlatos::actualizarTabla() {
    clsNodoPlato *aux = this->getRes()->getLP()->getCab();
    int row = 0;
    ui->tablaPlatos->clearContents();
    int rowCount = ui->tablaPlatos->rowCount();
    if(rowCount < this->getRes()->getLP()->getNPla()){
        ui->tablaPlatos->setRowCount(this->getRes()->getLP()->getNPla());
    }
    while (aux != NULL && row < this->getRes()->getLP()->getNPla()) {
        ui->tablaPlatos->setItem(row,0,new QTableWidgetItem(aux->getInfo()->getCodigo()) );
        ui->tablaPlatos->setItem(row,1,new QTableWidgetItem(aux->getInfo()->getNombre()) );
        ui->tablaPlatos->setItem(row,2,new QTableWidgetItem(aux->getInfo()->getCategoria()) );
        QString stock, precio;
        stock = QString::number(aux->getInfo()->getStock());
        precio = QString::number(aux->getInfo()->getPrecio());
        ui->tablaPlatos->setItem(row,3,new QTableWidgetItem(stock) );
        ui->tablaPlatos->setItem(row,4,new QTableWidgetItem(precio) );
        aux = aux->getSgte();
        row++;
    }
}
void formListaPlatos::on_pB_AgregarP_clicked(){
    formRegistrarPlatos *nuevo = new formRegistrarPlatos();
    nuevo->setRes(this->getRes());
    nuevo->show();
}
void formListaPlatos::on_pB_actualizarT_clicked(){
    this->actualizarTabla();
}

void formListaPlatos::on_cerrar_clicked(){
    this->close();
}

void formListaPlatos::on_pB_ModificarP_clicked(){

}

void formListaPlatos::on_tablaPlatos_cellActivated(int row, int column){

    clsNodoPlato *stoc = this->getRes()->getLP()->buscar(ui->tablaPlatos->item(row,1)->text());
    if(stoc != NULL){
        formaniadirStock *nu = new formaniadirStock();
        nu->setRes(this->getRes());
        nu->setPla(stoc->getInfo());
        nu->show();
    }

}
