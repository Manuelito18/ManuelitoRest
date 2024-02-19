#ifndef CLSLISTATRABAJADORES_H
#define CLSLISTATRABAJADORES_H
#include <clsNodoTrabajador.h>

class clsListaTrabajadores{
public:
    clsListaTrabajadores();
    ~clsListaTrabajadores();

    clsNodoTrabajador *getCab() const;
    void setCab(clsNodoTrabajador *value);
    unsigned short getNTra() const;
    void setNTra(unsigned short value);

    //metodos normales
    void insertar(clsTrabajador *tra);
    clsNodoTrabajador *buscar(QString nombre);

private:
    clsNodoTrabajador *cab;
    unsigned short nTra;
};

#endif // CLSLISTATRABAJADORES_H
