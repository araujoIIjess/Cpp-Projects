#include <iostream>
//Funções para obter os valores das energias
#include "energia_input.h"
//Funções pra calcular os gastos
#include "energia_calc.h"
//Funções de conversão pra dinheiro
#include "energia_conv.h"



int main(){
    /*
    O valor de energia_inicioMes e energia_finalMes
    virá da função getValue()*/
    //Energia no inicio do mês
    double energia_inicioMes {getBoughtEnergy()};
    //Energia que resta no final do mês
    double energia_finalMes {getRestantEnergy(energia_inicioMes)};
    //Energia no inicio - energia no fim
    double energia_total {};
    //Energia gasta semanalmente
    double energia_semanal {};
    //Energia gasta diariamente
    double energia_diaria {};

    //Calculando a energia gasta num mes
    energia_total = MonthlyConsume(energia_inicioMes, energia_finalMes);
    std::cout << "Este mes gastaram-se: " << energia_total << " kWh \n";

    //Energia gasta semanalmente
    energia_semanal = WeeklyConsume(energia_total);
    std::cout << "A media semanal estimada do gasto de energia eh de: " << energia_semanal << " kWh" << '\n';

    //Energia gasta diariamente
    energia_diaria = DailyConsume(energia_semanal);
    std::cout << "A media diaria estimada do gasto de energia eh de: " << energia_diaria << " kWh \n";

    std::cout << "vose eh mulher?";
    return 0;
}