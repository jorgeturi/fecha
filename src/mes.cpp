#include "mes.h"
#include "iostream"

mes::mes()
{
    //ctor
}

mes::~mes()
{
    //dtor
}

int mes::get_mes()
{
    return mes_g;
}

void mes::set_mes(int mes_a_guardar){

   if(verificated_mes(mes_a_guardar)){
   mes_g = mes_a_guardar;}
   else{
    perror("ERROR GUARDATING NUMBER MES");
    mes_g = 0;
    }

}

int mes::verificated_mes(int mes)
{
    int valido = 1;
    if (mes < 0 || mes >12){
        valido = 0;
    }
    return valido;
}

