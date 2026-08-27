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
    double energia_total {MonthlyConsume(energia_inicioMes, energia_finalMes)};
    //Energia gasta semanalmente
    double energia_semanal {WeeklyConsume(energia_total)};
    //Energia gasta diariamente
    double energia_diaria {DailyConsume(energia_semanal)};

    //Energia em kwanza - variável que guarda o equivalente em kz da energia comprada em kWh
    double energia_inicioMes_kz {kWh_to_kz(energia_inicioMes)};
    //variável que guarda o equivalente em k da energia que sobra
    double energia_finalMes_kz {kWh_to_kz(energia_finalMes)};
    //variávl que guarda o equivalnte em kz da energia total
    double energia_total_kz {kWh_to_kz(energia_total)};

    //Calculando a energia gasta num mes
    std::cout << "Este mes gastaram-se: " << energia_total << " kWh \n";

    //Energia gasta semanalmente
    std::cout << "A media semanal estimada do gasto de energia eh de: " << energia_semanal << " kWh" << '\n';

    //Energia gasta diariamente
    std::cout << "A media diaria estimada do gasto de energia eh de: " << energia_diaria << " kWh \n";

    //Output do equivalente a enervia comprada em kwanza
    std::cout << "Este mes comprou-se o equivalente a: " << energia_inicioMes_kz << " kz \n"
    << "Sobrou o equivalente a: " << energia_finalMes_kz << " kz \n"
    << "Consumiu-se o equivalente a: " << energia_total_kz << " kz"; 

    return 0;
}