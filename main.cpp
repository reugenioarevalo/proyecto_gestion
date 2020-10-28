#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <cstdio>
using namespace std;
#include "Utilidades/menus.h"
#include "Include/Persona.h"
#include "Utilidades/validaciones.h"
#include "Direccion.h"
#include "Include/Entidad.h"
#include "Include/Ventas.h"
#include "DetalleFactura.h"
#include "Ususario.h"
#include "Login.h"


int main()
{
//        DetalleCompra obj;
//        obj.setidEntidad();
        Entidad ent;
//listarEntidades(2);
//      ent.cargarProveedor();
//        ent.grabarEnDisco(2);
//     ent.mostrarEntidad();
ent.listarEntidadesTabla(2);

//       ent.leerDeDisco(1, 2);
        menuPrincipal();

    return 0;
}
