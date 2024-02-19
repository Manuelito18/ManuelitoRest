#ifndef FORMREGISTRARCLIENTE_H
#define FORMREGISTRARCLIENTE_H

#include <QDialog>
#include <QMessageBox>
#include <clsRestaurante.h>

namespace Ui {
class formRegistrarCliente;
}

class formRegistrarCliente : public QDialog{
    Q_OBJECT

public:
    explicit formRegistrarCliente(QWidget *parent = 0);
    ~formRegistrarCliente();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
    clsCliente *ultimoCli();
    void inicializarCodigo();
    bool vali(QString value);
    bool validacionDatos();


private slots:
    void on_PB_Registrar_clicked();
    void on_PB_Cancelar_clicked();

private:
    clsCliente *actual;
    Ui::formRegistrarCliente *ui;
    clsRestaurante *res;
};

#endif // FORMREGISTRARCLIENTE_H
