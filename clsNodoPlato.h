#ifndef CLSNODOPLATO_H
#define CLSNODOPLATO_H
#include <clsPlato.h>

class clsNodoPlato{
public:
    clsNodoPlato();
    clsNodoPlato(clsPlato *pla);
    ~clsNodoPlato();
    clsNodoPlato *getSgte() const;
    void setSgte(clsNodoPlato *value);
    clsPlato *getInfo() const;
    void setInfo(clsPlato *value);

private:
    clsNodoPlato *sgte;
    clsPlato *info;
};

#endif // CLSNODOPLATO_H
