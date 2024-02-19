#include "clsRestaurante.h"

clsRestaurante::clsRestaurante(){
    this->nombre = "El MANUELITO";
    this->duenio = "Manuel Fernandez";
    this->lC = new clsListaClientes();
    this->lP = new clsListaPlatos();
    this->lT = new clsListaTrabajadores();
    this->lV = new clsListaVentas();
}
clsRestaurante::~clsRestaurante(){

}
clsListaTrabajadores *clsRestaurante::getLT() const{
    return lT;
}
void clsRestaurante::setLT(clsListaTrabajadores *value){
    lT = value;
}
clsListaClientes *clsRestaurante::getLC() const{
    return lC;
}
void clsRestaurante::setLC(clsListaClientes *value){
    lC = value;
}
clsListaPlatos *clsRestaurante::getLP() const{
    return lP;
}
void clsRestaurante::setLP(clsListaPlatos *value){
    lP = value;
}
clsListaVentas *clsRestaurante::getLV() const{
    return lV;
}
void clsRestaurante::setLV(clsListaVentas *value){
    lV = value;
}

//metodos extraajisja
void clsRestaurante::cargarDatos(){
    //Trabajadores
    clsTrabajador *nu1 = new clsTrabajador();
    nu1->setCodigo("T1");
    nu1->setNombre("Jose");
    nu1->setSexo("Masculino");
    nu1->setApellidos("Fernandez");
    nu1->setDni("72814517");
    nu1->setSueldo(562);
    nu1->setTipoTrabajador("admin");

    clsTrabajador *nu2 = new clsTrabajador();
    nu2->setCodigo("T2");
    nu2->setNombre("Marco");
    nu2->setSexo("Masculino");
    nu2->setApellidos("Hugaz Moro");
    nu2->setDni("8720313");
    nu2->setSueldo(100);
    nu2->setTipoTrabajador("mozo");

    this->getLT()->insertar(nu1);
    this->getLT()->insertar(nu2);


    //Clientes
    clsCliente *cli1 = new clsCliente();
    cli1->setNombre("Manuel");
    cli1->setApellidos("Fernandez");
    cli1->setDni("830782323");
    cli1->setEdad(19);
    cli1->setSexo("Masculino");
    cli1->setCodigo("c001");

    clsCliente *cli2 = new clsCliente();
    cli2->setNombre("Valentina");
    cli2->setApellidos("Hernandez");
    cli2->setDni("830782323");
    cli2->setEdad(19);
    cli2->setSexo("Femenino");
    cli2->setCodigo("c002");

    this->getLC()->insertar(cli1);
    this->getLC()->insertar(cli2);


    //Platos

    clsPlato *p1 = new clsPlato();
    p1->setNombre("Arroz con pollo");
    p1->setDescripcion("Un rico arroz con alberjas acompañado de un delisioso pollo");
    p1->setCategoria("Segundo");
    p1->setCodigo("pl0011");
    p1->setPrecio(35);
    p1->setStock(28);

    clsPlato *p2 = new clsPlato();
    p2->setNombre("Catapulcra");
    p2->setDescripcion("Los mejores fideos acompañados del porcino delicioso");
    p2->setCategoria("Segundo");
    p2->setCodigo("pl0013");
    p2->setPrecio(50);
    p2->setStock(12);

    clsPlato *p3 = new clsPlato();
    p3->setNombre("Aji de Gallina");
    p3->setDescripcion("Un rico arroz con alberjas acompañado de un delisioso pollo");
    p3->setCategoria("Segundo");
    p3->setCodigo("pl0014");
    p3->setPrecio(15);
    p3->setStock(36);

    clsPlato *p4 = new clsPlato();
    p4->setNombre("Ceviche");
    p4->setDescripcion("plato bandera del Peru por mucho mejor que cualquier delicia americana");
    p4->setCategoria("Entrada");
    p4->setCodigo("pl0012");
    p4->setPrecio(25);
    p4->setStock(76);

    this->getLP()->insertar(p1);
    this->getLP()->insertar(p2);
    this->getLP()->insertar(p3);
    this->getLP()->insertar(p4);
}





