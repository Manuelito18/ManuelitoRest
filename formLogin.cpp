#include "formLogin.h"
#include "ui_formLogin.h"

formLogin::formLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formLogin){
    ui->setupUi(this);
}

formLogin::~formLogin(){
    delete ui;
}

void formLogin::on_ingresar_clicked(){
    if(ui->getUsuario->text().isEmpty()|| ui->getContrasenia->text().isEmpty()){
        QMessageBox ms;
        ms.setText("Complete todos los aspectos");
        ms.exec();
    }
    if ( ui->getUsuario->text() == "admin" &&
         ui->getContrasenia->text() == "admin"   ){
        this->close();
        MainWindow *prin = new MainWindow;
        prin->setRes(this->getRes());
        prin->show();
    }
    else{
        QMessageBox msje;
        msje.setText("Usuario o contraseña incorrecta");
        msje.exec();
    }
}
clsRestaurante *formLogin::getRes() const{
    return res;
}

void formLogin::setRes(clsRestaurante *value){
    res = value;
}

