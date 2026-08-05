#include "energia_conv.h"
//Função em que se vai inserir um valor em kwh e será convertido p kz
double kWh_to_kz(double kWh_value){
    constexpr double _1kWh {12.8};
    double energia_em_kz {kWh_value * _1kWh};
    return energia_em_kz;

}