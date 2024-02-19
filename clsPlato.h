#ifndef CLSPLATO_H
#define CLSPLATO_H
#include <QString>
#include <QDate>

class clsPlato{
public:
    clsPlato();
    clsPlato(QString codigo,QString nombre,QString categoria,QString descripcion,float precio,unsigned short stock);
    ~clsPlato();
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getDescripcion() const;
    void setDescripcion(const QString &value);
    float getPrecio() const;
    void setPrecio(float value);
    unsigned short getStock() const;
    void setStock(unsigned short value);
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getCategoria() const;
    void setCategoria(const QString &value);

private:
    QString codigo;
    QString nombre;
    QString categoria;
    QString descripcion;
    float precio;
    unsigned short stock;
};

#endif // CLSPLATO_H
