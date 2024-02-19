#ifndef FORMREGISTRARTRABAJADOR_H
#define FORMREGISTRARTRABAJADOR_H

#include <QDialog>
#include <QMessageBox>
#include <clsRestaurante.h>

namespace Ui {
class formRegistrarTrabajador;
}

class formRegistrarTrabajador : public QDialog{
    Q_OBJECT

public:
    explicit formRegistrarTrabajador(QWidget *parent = 0);
    ~formRegistrarTrabajador();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
    bool validacionDatos();
    bool vali(QString value);
    void inicializarCodigo();

private slots:
    void on_pBRegistrar_clicked();
    void on_pBCerrar_clicked();

private:
    Ui::formRegistrarTrabajador *ui;
    clsRestaurante *res;
};

#endif // FORMREGISTRARTRABAJADOR_H
