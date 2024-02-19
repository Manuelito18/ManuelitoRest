#ifndef CLSPEDIDO_H
#define CLSPEDIDO_H
#include <QString>
#include <clsPlato.h>

class clsPedido{
public:
    clsPedido();
    ~clsPedido();
    QString getNombrePlato() const;
    void setNombrePlato(const QString &value);

    unsigned short getCantidad() const;
    void setCantidad(unsigned short value);

    double getPrecioTotal() const;
    void setPrecioTotal(double value);

    clsPlato *getPlato() const;
    void setPlato(clsPlato *value);

private:
    QString nombrePlato;
    clsPlato *plato;
    unsigned short cantidad;
    double precioTotal;
};

#endif // CLSPEDIDO_H
