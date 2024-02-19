#ifndef CLSTRABAJADOR_H
#define CLSTRABAJADOR_H
#include <QString>

class clsTrabajador{
public:
    clsTrabajador();
    clsTrabajador(QString nombre,unsigned short edad,
                  QString sexo,QString dni, double sueldo,
                  QString tipoTrabajador);
    ~clsTrabajador();
    QString getNombre() const;
    void setNombre(const QString &value);
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
    QString getSexo() const;
    void setSexo(const QString &value);
    QString getDni() const;
    void setDni(const QString &value);
    double getSueldo() const;
    void setSueldo(double value);
    QString getTipoTrabajador() const;
    void setTipoTrabajador(const QString &value);
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getApellidos() const;
    void setApellidos(const QString &value);

private:
    QString codigo;
    QString nombre;
    QString apellidos;
    unsigned short edad;
    QString sexo;
    QString dni;
    double sueldo;
    QString tipoTrabajador;
};

#endif // CLSTRABAJADOR_H
