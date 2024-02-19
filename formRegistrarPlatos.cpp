#include "formRegistrarPlatos.h"
#include "ui_formRegistrarPlatos.h"

formRegistrarPlatos::formRegistrarPlatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formRegistrarPlatos){
    ui->setupUi(this);
}
formRegistrarPlatos::~formRegistrarPlatos(){
    delete ui;
}
clsRestaurante *formRegistrarPlatos::getRes() const{
    return res;
}
void formRegistrarPlatos::setRes(clsRestaurante *value){
    res = value;
}
void formRegistrarPlatos::on_PB_Cancelar_clicked(){
    this->close();
}
void formRegistrarPlatos::on_PB_Registrar_clicked(){
    //falta validacion de platos repetidos
    if(ui->getCodigo->text().isEmpty() || ui->getNombre->text().isEmpty() ||
            ui->getDescripcion->toPlainText().isEmpty() ||
            ui->getPrecio->value() == 0.00 || ui->getStock->value() == 0)    {
        QMessageBox::information(this, "Error", "Por favor, rellene todos los datos");
        return;
    }
    clsPlato *pla = new clsPlato();
    pla->setCodigo(ui->getCodigo->text());
    pla->setNombre(ui->getNombre->text());
    pla->setCategoria(ui->getCatego->currentText());
    pla->setDescripcion(ui->getDescripcion->toPlainText());
    pla->setPrecio(ui->getPrecio->value());
    pla->setStock(ui->getStock->value());
    this->getRes()->getLP()->insertar(pla);
    QMessageBox msje;
    msje.setText("Registro Exitoso :D");
    msje.exec();
    this->close();
}
