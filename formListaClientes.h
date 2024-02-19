#ifndef FORMLISTACLIENTES_H
#define FORMLISTACLIENTES_H

#include <QDialog>
#include <clsRestaurante.h>

namespace Ui {
class formListaClientes;
}

class formListaClientes : public QDialog
{
    Q_OBJECT

public:
    explicit formListaClientes(QWidget *parent = 0);
    ~formListaClientes();

    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);

    void actualizarTabla();

private slots:
    void on_pbCerrar_clicked();

private:
    Ui::formListaClientes *ui;
    clsRestaurante *res;
};

#endif // FORMLISTACLIENTES_H
