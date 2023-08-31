#include "anio.h"
#include "iostream"

anio::anio(int an)
{
   anio_g=an;
}

anio::~anio()
{
    //dtor
}

void anio::set_anio(int anio_a_guardar){

   if(verificated_anio(anio_a_guardar)){
   anio_g = anio_a_guardar;}
   else{
    perror("ERROR GUARDATING NUMBER ANIO");
    anio_g = 0;
    }

}

int anio::verificated_anio(int anio_a_guardar){

     int valido = 1;
    if (anio_a_guardar < 0){
        valido = 0;
    }
    return valido;

}

int anio::get_anio(){
    return anio_g;
}
