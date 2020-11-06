#ifndef CONTABLE_H
#define CONTABLE_H
#include "Fecha.h"
#include "Calculadora.h"

class Contable
{
    private:
        int operacion, nroCta;
        float debe, haber, saldo;
        Fecha f;
        calculadora calc;
    public:

        ///setters
        void setFechaDesde();
        void setFechaHasta();
        void setNroCta();

        ///getters
        Fecha getFechaDesde();
        Fecha getFechaHasta();

        ///funciones
        void imputarCta(Fecha, int, bool, bool, float );///recibe parametros
        void grabarEnDisco();///graba la imputacion linea por linea con "rb+"
        void listarLibroDiario(Fecha);///lista todas las cuentas  de una fecha determinada
        void listarLibroMayor(Fecha, Fecha, int);  ///de  un determinado mes y una determinada cuenta contable.


};

#endif // CONTABLE_H
