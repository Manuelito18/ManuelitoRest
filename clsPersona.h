#ifndef CLSPERSONA
#define CLSPERSONA
#include <QString>
#include <QDate>

class Persona{
protected:
    QString nombre;
    QString apellidos;
    unsigned short edad;
    QString sexo;
    QString dni;
public:
    Persona();
    Persona(QString nombre,QString apellidos, unsigned short edad,
            QString sexo, QString dni);
    ~Persona();
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getApellidos() const;
    void setApellidos(const QString &value);
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
    QString getSexo() const;
    void setSexo(const QString &value);
    QString getDni() const;
    void setDni(const QString &value);
};

#endif // CLSPERSONA

