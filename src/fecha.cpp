#include "fecha.h"
#include "iostream"

fecha::fecha(int un_me = 99)
{
    algun_mes.set_mes(un_me);
}

fecha::~fecha()
{
    //dtor
}


void fecha::set_fecha(int dia_a_guardar, int mes_a_guardar, int anio_a_guardar){

   algun_dia.set_dia(dia_a_guardar);

   algun_mes.set_mes(mes_a_guardar);

   algun_anio.set_anio(anio_a_guardar);
}
