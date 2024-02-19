#ifndef FORMREGISTRARPLATOS_H
#define FORMREGISTRARPLATOS_H

#include <QDialog>
#include <clsRestaurante.h>
#include <QMessageBox>

namespace Ui {
class formRegistrarPlatos;
}

class formRegistrarPlatos : public QDialog{
    Q_OBJECT
public:
    explicit formRegistrarPlatos(QWidget *parent = 0);
    ~formRegistrarPlatos();
    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);

private slots:
    void on_PB_Cancelar_clicked();
    void on_PB_Registrar_clicked();

private:
    Ui::formRegistrarPlatos *ui;
    clsRestaurante *res;
};

#endif // FORMREGISTRARPLATOS_H
