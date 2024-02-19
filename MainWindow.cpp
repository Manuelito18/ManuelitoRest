#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}
MainWindow::~MainWindow(){
    delete ui;
}
clsRestaurante *MainWindow::getRes() const
{
    return res;
}
void MainWindow::setRes(clsRestaurante *value){
    res = value;
}
void MainWindow::on_actionRegistrar_Trabajadores_triggered(){
    formRegistrarTrabajador *regTra = new formRegistrarTrabajador();
    regTra->setRes(this->getRes());
    regTra->inicializarCodigo();
    regTra->show();
}
void MainWindow::on_actionLista_de_Trabajadores_triggered(){
    formListaTrabajadores *lisTra = new formListaTrabajadores();
    lisTra->setRes(this->getRes());
    lisTra->actualizarTabla();
    lisTra->show();
}
void MainWindow::on_actionAgregar_Plato_triggered(){
    formRegistrarPlatos *regPla = new formRegistrarPlatos();
    regPla->setRes(this->getRes());
    regPla->show();
}
void MainWindow::on_actionListar_Platos_triggered(){
    formListaPlatos *jiji = new formListaPlatos();
    jiji->setRes(this->getRes());
    jiji->actualizarTabla();
    jiji->show();
}
void MainWindow::on_actionRegistrar_Cliente_triggered(){
    formRegistrarCliente *xd = new formRegistrarCliente();
    xd->setRes(this->getRes());
    xd->inicializarCodigo();
    xd->show();

}
void MainWindow::on_actionListar_Clientes_triggered(){
    formListaClientes *xd = new formListaClientes();
    xd->setRes(this->getRes());
    xd->actualizarTabla();
    xd->show();
}
void MainWindow::on_actionNueva_Venta_triggered(){
    formAtenderCliente *te = new formAtenderCliente();
    te->setRes(this->getRes());
    te->copiaDeSeguridadPlatos();
    te->actualizarComboBoxTraba();
    te->actualizarComboBoxCli();
    te->actualizarComboBoxPlatos();
    te->show();
}
