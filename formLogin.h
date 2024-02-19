#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <MainWindow.h>
#include <clsRestaurante.h>

namespace Ui {
class formLogin;}

class formLogin : public QDialog{
    Q_OBJECT

public:
    explicit formLogin(QWidget *parent = 0);
    ~formLogin();

    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);

private slots:
    void on_ingresar_clicked();

private:
    Ui::formLogin *ui;
    clsRestaurante *res;

};

#endif // FORMLOGIN_H
