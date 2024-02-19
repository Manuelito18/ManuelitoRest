#-------------------------------------------------
#
# Project created by QtCreator 2023-12-14T11:32:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PAF_Manuelito
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    clsListaClientes.cpp \
    clsListaTrabajadores.cpp \
    clsListaVentas.cpp \
    clsListaPlatos.cpp \
    clsListaPedido.cpp \
    clsNodoCliente.cpp \
    clsCliente.cpp \
    clsNodoVenta.cpp \
    clsVenta.cpp \
    clsNodoTrabajador.cpp \
    clsNodoPlato.cpp \
    clsNodoPedido.cpp \
    clsPedido.cpp \
    clsTrabajador.cpp \
    clsPlato.cpp \
    clsRestaurante.cpp \
    formLogin.cpp \
    formRegistrarTrabajador.cpp \
    formListaTrabajadores.cpp \
    formRegistrarPlatos.cpp \
    formListaPlatos.cpp \
    formAtenderCliente.cpp \
    clsPersona.cpp \
    formRegistrarCliente.cpp \
    formListaClientes.cpp \
    formaniadirStock.cpp

HEADERS  += MainWindow.h \
    clsListaClientes.h \
    clsListaTrabajadores.h \
    clsListaVentas.h \
    clsListaPlatos.h \
    clsListaPedido.h \
    clsNodoCliente.h \
    clsCliente.h \
    clsNodoVenta.h \
    clsVenta.h \
    clsNodoTrabajador.h \
    clsNodoPlato.h \
    clsNodoPedido.h \
    clsPedido.h \
    clsTrabajador.h \
    clsPlato.h \
    clsRestaurante.h \
    formLogin.h \
    formRegistrarTrabajador.h \
    formListaTrabajadores.h \
    formRegistrarPlatos.h \
    formListaPlatos.h \
    formAtenderCliente.h \
    clsPersona.h \
    formRegistrarCliente.h \
    formListaClientes.h \
    formaniadirStock.h

FORMS    += MainWindow.ui \
    formLogin.ui \
    formRegistrarTrabajador.ui \
    formListaTrabajadores.ui \
    formRegistrarPlatos.ui \
    formListaPlatos.ui \
    formAtenderCliente.ui \
    formRegistrarCliente.ui \
    formListaClientes.ui \
    formaniadirStock.ui

RESOURCES += \
    recursos.qrc
