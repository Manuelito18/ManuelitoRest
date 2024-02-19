#include "formaniadirStock.h"
#include "ui_formaniadirStock.h"

formaniadirStock::formaniadirStock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formaniadirStock)
{
    ui->setupUi(this);
}

formaniadirStock::~formaniadirStock()
{
    delete ui;
}
clsRestaurante *formaniadirStock::getRes() const
{
    return res;
}

void formaniadirStock::setRes(clsRestaurante *value)
{
    res = value;
}
clsPlato *formaniadirStock::getPla() const
{
    return pla;
}

void formaniadirStock::setPla(clsPlato *value)
{
    pla = value;
}

void formaniadirStock::on_pushButton_2_clicked(){
    this->getPla()->setStock(ui->getStock->value());
}

void formaniadirStock::on_pushButton_clicked(){
    this->close();
}
