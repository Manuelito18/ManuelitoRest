#ifndef CLSRESTAURANTE_H
#define CLSRESTAURANTE_H

#include <clsListaClientes.h>
#include <clsListaPlatos.h>
#include <clsListaTrabajadores.h>
#include <clsListaVentas.h>

class clsRestaurante{
public:
    clsRestaurante();
    ~clsRestaurante();
    clsListaTrabajadores *getLT() const;
    void setLT(clsListaTrabajadores *value);
    clsListaClientes *getLC() const;
    void setLC(clsListaClientes *value);
    clsListaPlatos *getLP() const;
    void setLP(clsListaPlatos *value);
    clsListaVentas *getLV() const;
    void setLV(clsListaVentas *value);
    void cargarDatos();
private:
    QString nombre;
    QString duenio;
    clsListaTrabajadores *lT;
    clsListaClientes *lC;
    clsListaPlatos *lP;
    clsListaVentas *lV;
};

#endif // CLSRESTAURANTE_H
