#ifndef CLSNODOPEDIDO_H
#define CLSNODOPEDIDO_H
#include <clsPedido.h>

class clsNodoPedido
{
public:
    clsNodoPedido();
    ~clsNodoPedido();
    clsNodoPedido *getSgte() const;
    void setSgte(clsNodoPedido *value);

    clsPedido *getInfo() const;
    void setInfo(clsPedido *value);

private:
    clsNodoPedido *sgte;
    clsPedido *info;
};

#endif // CLSNODOPEDIDO_H
