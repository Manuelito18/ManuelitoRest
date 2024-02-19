#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <clsRestaurante.h>
#include <formRegistrarTrabajador.h>
#include <formListaTrabajadores.h>
#include <formRegistrarPlatos.h>
#include <formListaPlatos.h>
#include <formRegistrarCliente.h>
#include <formAtenderCliente.h>
#include <formListaClientes.h>

namespace Ui {
class MainWindow;}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    clsRestaurante *getRes() const;
    void setRes(clsRestaurante *value);
private slots:
    void on_actionRegistrar_Trabajadores_triggered();
    void on_actionLista_de_Trabajadores_triggered();
    void on_actionAgregar_Plato_triggered();
    void on_actionListar_Platos_triggered();
    void on_actionRegistrar_Cliente_triggered();
    void on_actionListar_Clientes_triggered();

    void on_actionNueva_Venta_triggered();

private:
    Ui::MainWindow *ui;
    clsRestaurante *res;
};

#endif // MAINWINDOW_H
