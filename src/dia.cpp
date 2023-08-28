#include "dia.h"

using namespace std;
#include "iostream"
dia::dia()
{
    //ctor
}

dia::~dia()
{
    //dtor
}


unsigned int dia::get_dia()
{
    return dia_g;
}


int dia::verificated_dia(unsigned int dia_g)
{
    int valido = 1;
    if (dia_g < 0 || dia_g >33){
        valido = 0;
    }
    return valido;
}


void dia::set_dia(unsigned int d)
{
    if(verificated_dia(d)){
    dia_g = d;
    }else{
    perror("ERROR GUARDATING NUMBER DIA");
    dia_g = 0;
    }
}
