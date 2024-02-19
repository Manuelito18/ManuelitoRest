#ifndef CLSNODOTRABAJADOR_H
#define CLSNODOTRABAJADOR_H
#include <clsTrabajador.h>

class clsNodoTrabajador
{
public:
    clsNodoTrabajador();
    clsNodoTrabajador(clsTrabajador *tra);
    ~clsNodoTrabajador();
    clsNodoTrabajador *getSgte() const;
    void setSgte(clsNodoTrabajador *value);
    clsTrabajador *getInfo() const;
    void setInfo(clsTrabajador *value);

private:
    clsNodoTrabajador *sgte;
    clsTrabajador *info;
};

#endif // CLSNODOTRABAJADOR_H
