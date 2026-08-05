#include <iostream>
#include "energia_calc.h"
//Funções relacionadas ao consumo e calculo do consumo de energia
double MonthlyConsume(double inicio_mes, double final_mes ){
    //Calculando a media da energia no mês
    double energia_consumida {inicio_mes - final_mes};
    //Retorna o valor da media
    return energia_consumida;

}
//Função para calcular o gasto semanal
double WeeklyConsume(double monthly_average ){
    constexpr int monthly_weeks = 4;//NEEDS FIX -> Nem todo mês tem 4 semanas
    /*weekly_media será igual à
    energia que sobra no final do mês a dividir pelos dias da semana
    */
    double weekly_media {monthly_average / monthly_weeks};
    return weekly_media;

}
//Funçao para calcular o gasto diario
double DailyConsume(double weekly_average){
    constexpr int days {7};//NEEDS FIX
    /*O consumo diario é calculado a partir da
    divisao da energia gasta semanalmente pelos dias da semana
    */
    double media {weekly_average / days};
    return media;

}