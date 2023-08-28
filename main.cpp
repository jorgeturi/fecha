#include <iostream>

using namespace std;
#include"dia.h"
#include"mes.h"
#include"anio.h"
#include"fecha.h"


string numberToWords(unsigned int number) ;///AFANADAS DE CHATGPT
string numberToMonth(int number) ;
string yearToWords(int year) ;

int main()
{
    dia un_dia;
    mes un_mes;

    un_dia.set_dia(45);
    un_mes.set_mes(11);

    cout << un_dia.get_dia() << endl;
    cout << un_mes.get_mes() << "FIN TEST 1. 1 ERROR TUVO QUE HABER" << endl;

    fecha una_fecha(8); ///POR QUE NO QUEDA GUARDADO?
    //fecha * una_fecha = new fecha(3);
    una_fecha.set_dia(15);
    una_fecha.set_mes(4);
    una_fecha.set_anio(1326);
    cout << una_fecha.get_dia() << endl;
    cout << una_fecha.get_mes() << endl;
    cout << una_fecha.get_anio() << endl << "FIN ESCALERA" <<endl;

    cout << numberToWords(una_fecha.get_dia()) << " de " << numberToMonth(una_fecha.get_mes()) << " de " << yearToWords(una_fecha.get_anio())<< endl;
    cout << una_fecha.get_dia() << " de " << numberToMonth(una_fecha.get_mes()) << " de " << yearToWords(una_fecha.get_anio())<< endl;
    cout << numberToWords(una_fecha.get_dia()) << " de " << numberToMonth(una_fecha.get_mes()) << " de " << una_fecha.get_anio()<<endl;

    return 0;
}


#include <string>
#include <map>
#include <sstream>

// Definición del mapa numberMap fuera de la función
static const std::map<unsigned int, std::string> numberMap = {
    {0, "cero"}, {1, "uno"}, {2, "dos"}, {3, "tres"}, {4, "cuatro"},
    {5, "cinco"}, {6, "seis"}, {7, "siete"}, {8, "ocho"}, {9, "nueve"},
    {10, "diez"}, {11, "once"}, {12, "doce"}, {13, "trece"}, {14, "catorce"},
    {15, "quince"}, {16, "dieciséis"}, {17, "diecisiete"}, {18, "dieciocho"}, {19, "diecinueve"},
    {20, "veinte"}, {21, "veintiuno"}, {22, "veintidós"}, {23, "veintitrés"}, {24, "veinticuatro"},
    {25, "veinticinco"}, {26, "veintiséis"}, {27, "veintisiete"}, {28, "veintiocho"}, {29, "veintinueve"},
    {30, "treinta"}, {31, "treinta y uno"}, {32, "treinta y dos"}, {33, "treinta y tres"},
    {34, "treinta y cuatro"}, {35, "treinta y cinco"}, {36, "treinta y seis"}, {37, "treinta y siete"}, {38, "treinta y ocho"},
    {39, "treinta y nueve"}, {40, "cuarenta"}, {41, "cuarenta y uno"}, {42, "cuarenta y dos"}, {43, "cuarenta y tres"},
    {44, "cuarenta y cuatro"}, {45, "cuarenta y cinco"}, {46, "cuarenta y seis"}, {47, "cuarenta y siete"}, {48, "cuarenta y ocho"},
    {49, "cuarenta y nueve"}, {50, "cincuenta"}, {51, "cincuenta y uno"}, {52, "cincuenta y dos"}, {53, "cincuenta y tres"},
    {54, "cincuenta y cuatro"}, {55, "cincuenta y cinco"}, {56, "cincuenta y seis"}, {57, "cincuenta y siete"}, {58, "cincuenta y ocho"},
    {59, "cincuenta y nueve"}, {60, "sesenta"}, {61, "sesenta y uno"}, {62, "sesenta y dos"}, {63, "sesenta y tres"},
    {64, "sesenta y cuatro"}, {65, "sesenta y cinco"}, {66, "sesenta y seis"}, {67, "sesenta y siete"}, {68, "sesenta y ocho"},
    {69, "sesenta y nueve"}, {70, "setenta"}, {71, "setenta y uno"}, {72, "setenta y dos"}, {73, "setenta y tres"},
    {74, "setenta y cuatro"}, {75, "setenta y cinco"}, {76, "setenta y seis"}, {77, "setenta y siete"}, {78, "setenta y ocho"},
    {79, "setenta y nueve"}, {80, "ochenta"}, {81, "ochenta y uno"}, {82, "ochenta y dos"}, {83, "ochenta y tres"},
    {84, "ochenta y cuatro"}, {85, "ochenta y cinco"}, {86, "ochenta y seis"}, {87, "ochenta y siete"}, {88, "ochenta y ocho"},
    {89, "ochenta y nueve"}, {90, "noventa"}, {91, "noventa y uno"}, {92, "noventa y dos"}, {93, "noventa y tres"},
    {94, "noventa y cuatro"}, {95, "noventa y cinco"}, {96, "noventa y seis"}, {97, "noventa y siete"}, {98, "noventa y ocho"},
    {99, "noventa y nueve"}
};


std::string numberToWords(unsigned int number) {
    static std::map<unsigned int, std::string> mutableNumberMap = numberMap;

    if (mutableNumberMap.count(number)) {
        return mutableNumberMap.at(number);
    } else {
        return "Número no válido";
    }
}

std::string numberToMonth(int number) {
    static const std::map<int, std::string> monthMap = {
        {1, "enero"}, {2, "febrero"}, {3, "marzo"}, {4, "abril"},
        {5, "mayo"}, {6, "junio"}, {7, "julio"}, {8, "agosto"},
        {9, "septiembre"}, {10, "octubre"}, {11, "noviembre"}, {12, "diciembre"}
    };

    if (monthMap.count(number)) {
        return monthMap.at(number);
    } else {
        return "Número de mes no válido";
    }
}

std::string yearToWords(int year) {
    if (year < 0 || year > 9999) {
        return "Año no válido";
    }

    if (year == 0) {
        return "cero";
    }

    std::ostringstream result;

    if (year >= 1000) {
        if(year/1000 == 1){
            result << "mil ";
        }else{
        result << numberToWords(year / 1000) << " mil ";
        }
        year %= 1000;
    }

    if (year >= 100) {
        if (year >= 200) {
            result << numberToWords(year / 100) << "cientos ";
            year %= 100;
        } else {
            if (year == 100) {
                result << "cien";
            } else {
                result << "ciento ";
            }
            year %= 100;
        }
    }

    if (year > 0) {
        if (!result.str().empty() && year <= 33) {
            result;
        }
        result << numberToWords(year);
    }

    return result.str();
}
