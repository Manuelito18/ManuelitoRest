#ifndef FORMLISTATRABAJADORES_H
#define FORMLISTATRABAJADORES_H

#include <QDialog>
#include <clsRestaurante.h>

namespace Ui {
class formListaTrabajadores;
}

class formListaTrabajadores : public QDialog{
    Q_OBJECT

public:
    explicit formListaTrabajadores(QWidget *parent = 0);
    ~formListaTrabajadores();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
    void actualizarTabla();

private slots:
    void on_pbCerrar_clicked();

private:
    Ui::formListaTrabajadores *ui;
    clsRestaurante *res;
};

#endif // FORMLISTATRABAJADORES_H
