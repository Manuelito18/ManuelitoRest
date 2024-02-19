#ifndef CLSCLIENTE_H
#define CLSCLIENTE_H
#include <clsPersona.h>

class clsCliente:public Persona{
private:
    QString codigo;
public:
    clsCliente();
    clsCliente(QString nombre,QString apellidos, unsigned short edad,
               QString sexo, QString dni,QString codigo);
    ~clsCliente();
    QString getCodigo() const;
    void setCodigo(const QString &value);
};

#endif // CLSCLIENTE_H
