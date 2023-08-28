#ifndef FECHA_H
#define FECHA_H

#include "dia.h"
#include "mes.h"
#include "anio.h"
class fecha : public dia , public mes , public anio
{
public:
    fecha(int);
    virtual ~fecha();

    void metodoClaseDerivada();
    void set_fecha(int, int, int);
    imprimir_fecha();

private:
    int atributoClaseDerivada;
    dia algun_dia;
    mes algun_mes;
    anio algun_anio;

};

#endif // FECHA_H