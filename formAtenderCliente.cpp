#include "formAtenderCliente.h"
#include "ui_formAtenderCliente.h"

formAtenderCliente::formAtenderCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formAtenderCliente){
    ui->setupUi(this);
    this->listaPedido = new clsListaPedido();
}
formAtenderCliente::~formAtenderCliente(){
    delete ui;
}
clsRestaurante *formAtenderCliente::getRes() const{
    return res;
}
void formAtenderCliente::setRes(clsRestaurante *value){
    res = value;
}
clsTrabajador *formAtenderCliente::getTraSelec() const{
    return traSelec;
}
void formAtenderCliente::setTraSelec(clsTrabajador *value){
    traSelec = value;
}
clsCliente *formAtenderCliente::getCliSelec() const{
    return cliSelec;
}
void formAtenderCliente::setCliSelec(clsCliente *value){
    cliSelec = value;
}
clsPlato *formAtenderCliente::getPlatoTemp() const{
    return platoTemp;
}
void formAtenderCliente::setPlatoTemp(clsPlato *value){
    platoTemp = value;
}
clsListaPlatos *formAtenderCliente::getListaPlatosNueva() const{
    return listaPlatosNueva;
}
void formAtenderCliente::setListaPlatosNueva(clsListaPlatos *value){
    listaPlatosNueva = value;
}

void formAtenderCliente::copiaDeSeguridadPlatos(){
    this->listaPlatosNueva = new clsListaPlatos();
    clsNodoPlato *nodoActual = this->getRes()->getLP()->getCab();
    while (nodoActual != NULL) {
        clsPlato *platoOriginal = nodoActual->getInfo();
        clsPlato *nuevoPlato = new clsPlato(
                    platoOriginal->getCodigo(),
                    platoOriginal->getNombre(),
                    platoOriginal->getCategoria(),
                    platoOriginal->getDescripcion(),
                    platoOriginal->getPrecio(),
                    platoOriginal->getStock()
                    );
        this->getListaPlatosNueva()->insertar(nuevoPlato);
        nodoActual = nodoActual->getSgte();
    }
    this->setTraSelec(NULL);
    this->setCliSelec(NULL);
    this->setPlatoTemp(NULL);

}

clsListaPedido *formAtenderCliente::getListaPedido() const{
    return listaPedido;
}
void formAtenderCliente::setListaPedido(clsListaPedido *value){
    listaPedido = value;
}


void formAtenderCliente::actualizarComboBoxTraba(){
    clsNodoTrabajador *aux = this->getRes()->getLT()->getCab();
    if(aux == NULL)return;
    while(aux != NULL){
        ui->listaTraba->addItem(aux->getInfo()->getNombre());
        aux = aux->getSgte();
    }
}
void formAtenderCliente::actualizarComboBoxCli(){
    clsNodoCliente *aux = this->getRes()->getLC()->getCab();
    if(aux == NULL)return;
    while(aux != NULL){
        ui->listaClie->addItem(aux->getInfo()->getNombre());
        aux = aux->getSgte();
    }
}
void formAtenderCliente::actualizarComboBoxPlatos(){
    clsNodoPlato *aux = this->getListaPlatosNueva()->getCab();
    this->ui->listaPlatos->clear();
    if(aux == NULL)return;
    while(aux != NULL){
        if(aux->getInfo()->getStock() == 0){
            aux = aux->getSgte();
        }else{
            ui->listaPlatos->addItem(aux->getInfo()->getNombre());
            aux = aux->getSgte();
        }
    }
}

void formAtenderCliente::actualizarDatosVenta(){
    //un poco de codigo

}

void formAtenderCliente::actualizarTabla(clsPedido *pedi) {

    int rowCount = ui->mostraPlatos->rowCount();
    ui->mostraPlatos->setRowCount(rowCount + 1);
    ui->mostraPlatos->setItem(rowCount,0, new QTableWidgetItem(pedi->getPlato()->getCodigo()));
    ui->mostraPlatos->setItem(rowCount,1, new QTableWidgetItem(pedi->getNombrePlato()));
    ui->mostraPlatos->setItem(rowCount,2, new QTableWidgetItem(pedi->getPlato()->getDescripcion()));
    ui->mostraPlatos->setItem(rowCount,3, new QTableWidgetItem(QString::number(pedi->getCantidad())));
    ui->mostraPlatos->setItem(rowCount,4, new QTableWidgetItem(QString::number(pedi->getPlato()->getPrecio())));
    ui->mostraPlatos->setItem(rowCount,5, new QTableWidgetItem(QString::number(pedi->getPrecioTotal())));

    ui->getIgv->setText("18%");
    double nuevo = pedi->getPrecioTotal();
    double subTotal = ui->getSubTotal->text().toDouble() + nuevo;
    ui->getSubTotal->setText(QString::number(subTotal));
    ui->getTotal->setText(QString::number(subTotal+(subTotal*0.18)));

}

void formAtenderCliente::on_listaTraba_activated(const QString &arg1){

    QString buscar = ui->listaTraba->currentText();
    clsNodoTrabajador *yei = this->getRes()->getLT()->buscar(buscar);
    if(yei != NULL){
        ui->getCodigoTra->setText(yei->getInfo()->getCodigo());
        ui->getNombreTra->setText(yei->getInfo()->getNombre()+" "+yei->getInfo()->getApellidos());
        ui->getEdadTra->setText(QString::number(yei->getInfo()->getEdad()));
        ui->getSexoTra->setText(yei->getInfo()->getSexo());
        ui->getDniTra->setText(yei->getInfo()->getDni());
    }
    this->setTraSelec(yei->getInfo());
}
void formAtenderCliente::on_listaClie_activated(const QString &arg1){
    QString buscar = ui->listaClie->currentText();
    clsNodoCliente *yei = this->getRes()->getLC()->buscar(buscar);
    if(yei != NULL){
        ui->getNombreCli->setText(yei->getInfo()->getNombre()+" "+yei->getInfo()->getApellidos());
    }
    this->setCliSelec(yei->getInfo());
}
void formAtenderCliente::on_listaPlatos_activated(const QString &arg1){
    QString buscar = ui->listaPlatos->currentText();
    clsNodoPlato *yei = this->getListaPlatosNueva()->buscar(buscar);
    if(yei != NULL){
        ui->getStock->setText(QString::number(yei->getInfo()->getStock()));
        ui->getPrecio->setText(QString::number(yei->getInfo()->getPrecio()));
    }
    this->setPlatoTemp(yei->getInfo());
}


void formAtenderCliente::on_pB_anadirPlato_clicked(){

    if(this->getTraSelec() == NULL){
        QMessageBox::information(this, "Error", "Trabajador no seleccionado");
        return;
    }
    if(this->getCliSelec()== NULL){
        QMessageBox::information(this, "Error", "Cliente no seleccionado");
        return;
    }
    if(this->getPlatoTemp()== NULL){
        QMessageBox::information(this, "Error", "Plato no seleccionado");
        return;
    }

    clsPedido *pedi = new clsPedido();
    pedi->setPlato(this->getPlatoTemp());
    if(!(this->getPlatoTemp()->getStock() >= ui->getCantidad->value())){
        QMessageBox msje;
        msje.setText("Stock insuficiente");
        msje.exec();
        return;
    }
    pedi->setNombrePlato(this->getPlatoTemp()->getNombre());
    pedi->setCantidad(ui->getCantidad->value());
    this->getPlatoTemp()->setStock(this->getPlatoTemp()->getStock() - ui->getCantidad->value());
    pedi->setPrecioTotal(this->getPlatoTemp()->getPrecio() * ui->getCantidad->value());
    this->getListaPedido()->insertar(pedi);
    this->actualizarComboBoxPlatos();
    this->actualizarTabla(pedi);
    ui->getCantidad->setValue(1);
    this->on_listaPlatos_activated("a");
}

void formAtenderCliente::on_PB_guardar_clicked(){
    if(ui->getCodigoV->text().isEmpty()){
        QMessageBox::information(this, "Error", "Codigo vacio");
        return;
    }
    clsVenta *ven = new clsVenta();
    ven->setCodigo(ui->getCodigoV->text());
    ven->setFecha(ui->getFecha->date());
    ven->setNombreTraba(this->getTraSelec()->getNombre());
    ven->setCli(this->getCliSelec());
    ven->setVenta(this->getListaPedido());
    this->getRes()->getLV()->insertar(ven);
    this->getRes()->setLP(this->getListaPlatosNueva());
    this->close();
}

void formAtenderCliente::on_PB_Cerrar_clicked(){
    this->close();
}

