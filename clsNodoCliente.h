#ifndef CLSNODOCLIENTE_H
#define CLSNODOCLIENTE_H
#include <clsCliente.h>

class clsNodoCliente
{
public:
    clsNodoCliente();
    clsNodoCliente(clsCliente *cli);
    ~clsNodoCliente();
    clsNodoCliente *getSgte() const;
    void setSgte(clsNodoCliente *value);

    clsCliente *getInfo() const;
    void setInfo(clsCliente *value);

private:
    clsNodoCliente *sgte;
    clsCliente *info;
};

#endif // CLSNODOCLIENTE_H
