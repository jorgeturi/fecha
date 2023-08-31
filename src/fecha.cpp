#include "fecha.h"
#include "iostream"

fecha::fecha(int un_me, int un_di,int un_an){

    algun_anio.set_anio(un_an);
    algun_mes.set_mes(un_me);
    algun_dia.set_dia(un_di);

}


/*
fecha::fecha(int un_me, int un_di,int un_an) :

    algun_mes(un_me),
    algun_dia(un_di),
    algun_anio(un_an)
{}
*/

fecha::~fecha()
{
    //dtor
}


void fecha::set_fecha(int dia_a_guardar, int mes_a_guardar, int anio_a_guardar){

   algun_dia.set_dia(dia_a_guardar);

   algun_mes.set_mes(mes_a_guardar);

   algun_anio.set_anio(anio_a_guardar);
}
