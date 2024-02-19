#include "formRegistrarCliente.h"
#include "ui_formRegistrarCliente.h"

formRegistrarCliente::formRegistrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formRegistrarCliente){
    ui->setupUi(this);
    this->actual = NULL;
}

formRegistrarCliente::~formRegistrarCliente(){
    delete ui;
}
clsRestaurante *formRegistrarCliente::getRes() const{
    return res;
}
void formRegistrarCliente::setRes(clsRestaurante *value){
    res = value;
}
clsCliente *formRegistrarCliente::ultimoCli(){
    return this->actual;
}
void formRegistrarCliente::on_PB_Registrar_clicked(){

    if(this->validacionDatos()== false)return;

    clsCliente *cli = new clsCliente();
    cli->setCodigo(ui->getCodigo->text());
    cli->setNombre(ui->getNombre->text());
    cli->setApellidos(ui->getApellidos->text());
    cli->setEdad(ui->getEdad->value());
    QString sexo;
    if(ui->bBMasculino->isChecked()== true){
        sexo="Masculino";
    }else sexo = "Femenino";
    cli->setSexo(sexo);
    cli->setDni(ui->getDni->text());
    this->getRes()->getLC()->insertar(cli);
    this->actual = cli;
    QMessageBox msje;
    msje.setText("Registro Exitoso :D");
    msje.exec();
    this->close();
}
void formRegistrarCliente::on_PB_Cancelar_clicked(){
    this->close();
}


//validaciones


bool formRegistrarCliente::validacionDatos(){

    if(ui->getNombre->text().isEmpty() || ui->getApellidos->text().isEmpty()||
            ui->getEdad->value() == 0 || ui->getDni->text().isEmpty()){
        QMessageBox::information(this, "Error", "Por favor, rellene todos los datos");
        return false;
    }

    QMessageBox msje;
    if(this->vali(ui->getNombre->text()) == false){
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

bool formRegistrarCliente::vali(QString value){
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

void formRegistrarCliente::inicializarCodigo(){
    ui->getCodigo->setText("T"+QString::number(this->getRes()->getLT()->getNTra()+1));
}



