#ifndef FORMATENDERCLIENTE_H
#define FORMATENDERCLIENTE_H

#include <QDialog>
#include <QMessageBox>
#include <clsRestaurante.h>

namespace Ui {
class formAtenderCliente;
}

class formAtenderCliente : public QDialog{
    Q_OBJECT

public:
    explicit formAtenderCliente(QWidget *parent = 0);
    ~formAtenderCliente();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
    clsCliente *getCliSelec() const;
    void setCliSelec(clsCliente *value);
    clsTrabajador *getTraSelec() const;
    void setTraSelec(clsTrabajador *value);
    clsPlato *getPlatoTemp() const;
    void setPlatoTemp(clsPlato *value);
    clsListaPedido *getListaPedido() const;
    void setListaPedido(clsListaPedido *value);
    clsListaPlatos *getListaPlatosNueva() const;
    void setListaPlatosNueva(clsListaPlatos *value);
    void copiaDeSeguridadPlatos();


    void actualizarComboBoxTraba();
    void actualizarComboBoxCli();
    void actualizarComboBoxPlatos();
    void actualizarDatosVenta();
    void actualizarTabla(clsPedido *pedi);

private slots:
    void on_listaTraba_activated(const QString &arg1);
    void on_listaClie_activated(const QString &arg1);
    void on_listaPlatos_activated(const QString &arg1);

    void on_pB_anadirPlato_clicked();

    void on_PB_guardar_clicked();

    void on_PB_Cerrar_clicked();

private:
    Ui::formAtenderCliente *ui;
    clsRestaurante *res;
    clsCliente *cliSelec;
    clsTrabajador *traSelec;
    clsPlato *platoTemp;

    clsListaPedido *listaPedido;
    clsListaPlatos *listaPlatosNueva; //una copia de la original
};

#endif // FORMATENDERCLIENTE_H
