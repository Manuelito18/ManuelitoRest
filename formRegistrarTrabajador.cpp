#include "formRegistrarTrabajador.h"
#include "ui_formRegistrarTrabajador.h"

formRegistrarTrabajador::formRegistrarTrabajador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formRegistrarTrabajador){
    ui->setupUi(this);

}
formRegistrarTrabajador::~formRegistrarTrabajador()
{
    delete ui;
}
clsRestaurante *formRegistrarTrabajador::getRes() const
{
    return res;
}
void formRegistrarTrabajador::setRes(clsRestaurante *value){
    res = value;
}

bool formRegistrarTrabajador::validacionDatos(){
    if(ui->getNombres->text().isEmpty() || ui->getApellidos->text().isEmpty()||
            ui->getEdad->value() == 0 || ui->getDni->text().isEmpty()){
        QMessageBox::information(this, "Error", "Por favor, rellene todos los datos");
        return false;
    }

    QMessageBox msje;
    if(this->vali(ui->getNombres->text()) == false){
        msje.setText("Nombre no valido");
        msje.exec();
        return false;
    }
    if(this->vali(ui->getApellidos->text()) == false){
        msje.setText("Apellidos no validos");
        msje.exec();
        return false;
    }
    for(int x = 0; x < ui->getDni->text().length(); x++ ){
        if(ui->getDni->text().at(x).isNumber() != true){
            msje.setText("DNI no valido");
            msje.exec();
            return false;
        }
    }
    if(ui->getEdad->value() < 19){
        msje.setText("No se admiten menores de edad prr");
        msje.exec();
        return false;
    }

    return true;
}

bool formRegistrarTrabajador::vali(QString value){
    if(value.isNull())return false;
    if(value.isEmpty())return false;
    int spaces = 0;
    for(int i = 0; i < value.length(); i++){
        if(value.at(i).isNumber())return false;
        if(value.at(i).isDigit())return false;
        if(value.at(i).isPunct())return false;
        if(value.at(i).isSymbol())return false;
        if(value.at(i).isSpace())spaces++;
    }
    if(value.at(0).isSpace())return false;
    if(spaces > 1)return false;
    return true;
}

void formRegistrarTrabajador::inicializarCodigo(){
    ui->getCodigo->setText("T"+QString::number(this->getRes()->getLT()->getNTra()+1));
}


void formRegistrarTrabajador::on_pBRegistrar_clicked(){

    if(validacionDatos() == false)return;

    clsTrabajador *tra = new clsTrabajador;
    tra->setCodigo(ui->getCodigo->text());
    tra->setNombre(ui->getNombres->text());
    tra->setApellidos(ui->getApellidos->text());
    tra->setEdad(ui->getEdad->value());
    QString sexo;
    if(ui->bBMasculino->isChecked()== true){
        sexo="Masculino";
    }else sexo = "Femenino";
    tra->setSexo(sexo);
    tra->setDni(ui->getDni->text());
    tra->setSueldo(ui->getSueldo->value());
    tra->setTipoTrabajador(ui->getTipoTra->currentText());
    this->getRes()->getLT()->insertar(tra);
    QMessageBox msje;
    msje.setText("Registro Exitoso :D");
    msje.exec();
    this->close();
}

void formRegistrarTrabajador::on_pBCerrar_clicked(){
    this->close();
}
