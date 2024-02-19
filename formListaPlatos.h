#ifndef FORMLISTAPLATOS_H
#define FORMLISTAPLATOS_H

#include <QDialog>
#include <clsRestaurante.h>
#include <formRegistrarPlatos.h>
#include <formaniadirStock.h>

namespace Ui {
class formListaPlatos;
}

class formListaPlatos : public QDialog
{
    Q_OBJECT

public:
    explicit formListaPlatos(QWidget *parent = 0);
    ~formListaPlatos();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
    void actualizarTabla();

private slots:
    void on_pB_AgregarP_clicked();
    void on_pB_actualizarT_clicked();

    void on_cerrar_clicked();

    void on_pB_ModificarP_clicked();

    void on_tablaPlatos_cellActivated(int row, int column);

private:
    Ui::formListaPlatos *ui;
    clsRestaurante *res;
};

#endif // FORMLISTAPLATOS_H
