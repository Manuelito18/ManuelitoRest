#ifndef CLSLISTAPLATOS_H
#define CLSLISTAPLATOS_H
#include <clsNodoPlato.h>

class clsListaPlatos{
public:
    clsListaPlatos();
    ~clsListaPlatos();
    clsNodoPlato *getCab() const;
    void setCab(clsNodoPlato *value);
    unsigned short getNPla() const;
    void setNPla(unsigned short value);

    //metodos
    void insertar(clsPlato *pla);
    clsNodoPlato *buscar(QString poto);

private:
    clsNodoPlato *cab;
    unsigned short nPla;
};

#endif // CLSLISTAPLATOS_H
