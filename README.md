# Sistema de administración de PYMEs
Proyecto de sistema pyme para la UTN FRGP
Integrantes:
AREVALO, R. Eugenio
AROSTEGUI, Isidoro
AYALA, Elizabeth C.
QUINTEROS, David
15/10/2020
UTN FRGP – Laboratorio de Computación II
INTRODUCCION
El sistema a desarrollar permitirá simular la administración contable de una Pyme.
Contará con un menú principal y una serie de submenúes que serán la interfaz grafica
para la gestión de contabilidad , compras, ventas y stock.
CONTABILIDAD
El objetivo principal del programa es llevar a cabo el registro contable de la empresa.
Se registrará mediante asientos manuales, utilizando un pseudo “Plan de Cuentas”,
permitiendo clasificar las cuentas para poder ser registradas en el debe y haber del
archivo de movimientos contables, es decir, indicara si la operación proviene del
sistema de compras o de ventas, asientos manuales, u otra operación. Calculará,
además impuestos del 10,5%, 21% según operaciones realizadas. Por otro lado, estos
impuestos se verán reflejados tanto en facturas como en órdenes de compras.
COMPRAS
El sistema registrará las operaciones que impliquen la adquisición de bienes y/o
servicios, contabilizando mediante el código de proveedor, y discriminado los ítems de
la FC según corresponda
VENTAS
Este sistema será para empresas calificadas como responsable inscripto (RI), por lo
tanto, en la gestión de ventas se emitirán facturas del tipo A. La factura A detallará el
CUIT del comprador, nombre y apellido o razón social y el Impuesto del Valor Agregado
entre otros.
STOCK
Este sistema presentará un modelo de stock basado en archivos en el cual podremos
cargar productos de forma manual o podrán aumentar mediante una compra realizada
por la empresa o disminuir por una venta realizada.
MODULOS
Contaría con los siguientes módulos estimativos
CONTABILIDAD
 Libro Mayor
 Libro Diario
 Asientos Manuales
 Sumas y saldos
 Cierre de caja
 Apertura de caja
VENTAS
 Registro de Ventas
 Emisión de comprobante
COMPRAS
 Orden de compras
 Pagos a proveedores
STOCK
 Inventario
 Carga de almacén
CLASES
Dejamos algunos de los diagramas de clases con los que contaría