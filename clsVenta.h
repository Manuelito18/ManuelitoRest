#ifndef CLSVENTA_H
#define CLSVENTA_H
#include <clsListaPedido.h>
#include <clsListaTrabajadores.h>
#include <clsListaClientes.h>
#include <QDate>

class clsVenta{
public:
    clsVenta();
    ~clsVenta();

    QString getCodigo() const;
    void setCodigo(const QString &value);

    QString getNombreTraba() const;
    void setNombreTraba(const QString &value);

    QDate getFecha() const;
    void setFecha(const QDate &value);

    clsCliente *getCli() const;
    void setCli(clsCliente *value);

    clsListaPedido *getVenta() const;
    void setVenta(clsListaPedido *value);

    float getIgv() const;
    void setIgv(float value);
    double getSubTotal() const;
    void setSubTotal(double value);
    double getTotal() const;
    void setTotal(double value);

private:
    QString codigo;
    QString nombreTraba;
    //no se pude con puntero a tra
    QDate fecha;
    clsCliente *cli;
    clsListaPedido *venta;
    float igv;
    double subTotal;
    double total;
};

#endif // CLSVENTA_H
