#ifndef CLSLISTACLIENTES_H
#define CLSLISTACLIENTES_H
#include <clsNodoCliente.h>

class clsListaClientes{
public:
    clsListaClientes();
    ~clsListaClientes();
    clsNodoCliente *getCab() const;
    void setCab(clsNodoCliente *value);
    unsigned short getNCli() const;
    void setNCli(unsigned short value);
    //metodos
    void insertar(clsCliente *cli);
    clsNodoCliente *buscar(QString nombre);

private:
    clsNodoCliente *cab;
    unsigned short nCli;
};

#endif // CLSLISTACLIENTES_H
