#ifndef CLSLISTAPEDIDO_H
#define CLSLISTAPEDIDO_H
#include <clsNodoPedido.h>

class clsListaPedido{
public:
    clsListaPedido();
    ~clsListaPedido();
    clsNodoPedido *getCab() const;
    void setCab(clsNodoPedido *value);

    unsigned short getNPed() const;
    void setNPed(unsigned short value);
    void insertar(clsPedido *pe);

private:
    clsNodoPedido *cab;
    unsigned short nPed;
};

#endif // CLSLISTAPEDIDO_H
