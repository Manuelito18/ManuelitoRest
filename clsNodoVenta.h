#ifndef CLSNODOVENTA_H
#define CLSNODOVENTA_H
#include <clsVenta.h>

class clsNodoVenta{
public:
    clsNodoVenta();
    clsNodoVenta(clsVenta *ven);
    ~clsNodoVenta();
    clsNodoVenta *getSgte() const;
    void setSgte(clsNodoVenta *value);
    clsVenta *getInfo() const;
    void setInfo(clsVenta *value);



private:
    clsNodoVenta *sgte;
    clsVenta *info;
};

#endif // CLSNODOVENTA_H
