#ifndef FORMANIADIRSTOCK_H
#define FORMANIADIRSTOCK_H

#include <QDialog>
#include <clsRestaurante.h>

namespace Ui {
class formaniadirStock;
}

class formaniadirStock : public QDialog
{
    Q_OBJECT

public:
    explicit formaniadirStock(QWidget *parent = 0);
    ~formaniadirStock();

    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);

    clsPlato *getPla() const;
    void setPla(clsPlato *value);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::formaniadirStock *ui;
    clsRestaurante *res;
    clsPlato *pla;

};

#endif // FORMANIADIRSTOCK_H
