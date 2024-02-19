#include "formListaTrabajadores.h"
#include "ui_formListaTrabajadores.h"

formListaTrabajadores::formListaTrabajadores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formListaTrabajadores){
    ui->setupUi(this);
}

formListaTrabajadores::~formListaTrabajadores(){
    delete ui;
}
clsRestaurante *formListaTrabajadores::getRes() const{
    return res;
}

void formListaTrabajadores::setRes(clsRestaurante *value){
    res = value;
}

void formListaTrabajadores::actualizarTabla() {
    clsNodoTrabajador *aux = this->getRes()->getLT()->getCab();
    int row = 0;
    ui->tablaTraba->clearContents();
    int rowCount = ui->tablaTraba->rowCount();
    if (rowCount < this->getRes()->getLT()->getNTra()) {
        ui->tablaTraba->setRowCount(this->getRes()->getLT()->getNTra());
    }

    while (aux != NULL && row < this->getRes()->getLT()->getNTra()) {
        ui->tablaTraba->setItem(row, 0, new QTableWidgetItem(aux->getInfo()->getCodigo()));
        ui->tablaTraba->setItem(row, 1, new QTableWidgetItem(aux->getInfo()->getNombre()));
        ui->tablaTraba->setItem(row, 2, new QTableWidgetItem(aux->getInfo()->getApellidos()));
        QString xd = QString::number(aux->getInfo()->getSueldo());
        ui->tablaTraba->setItem(row, 3, new QTableWidgetItem(xd));
        ui->tablaTraba->setItem(row, 4, new QTableWidgetItem(aux->getInfo()->getTipoTrabajador()));
        aux = aux->getSgte();
        row++;
    }
}


void formListaTrabajadores::on_pbCerrar_clicked(){
    this->close();
}
