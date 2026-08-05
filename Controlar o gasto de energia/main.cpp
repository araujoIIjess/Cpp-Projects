#include <iostream>

double getBoughtEnergy(){

    //Funcao para obter o valor da energia comprada
    double energia_comprada {};
    do{
        std::cout << "Insira o valor da energia comprada: \n";
        std::cin >> energia_comprada;
    }while(energia_comprada <= 0);

    return energia_comprada;
}

double getRestantEnergy(double bought_energy){
    //Funçao para obter o valor da energia sobrada no fim do mes
    //Compara o valor da energia comprada, para que a restante não seja maior
    double energia_restante {};
    /*
        Criar variavel i, e incrementar a cada vez que houver uma input errada
        de forma a aparecer uma mensagem e o usuario inserir o valor correcto
    */
    do{
        //Pede o valor da energia restante
        std::cout << "Insira o valor da energia que sobrou: \n";
        std::cin >> energia_restante;
    //Se a energia restante for maior, reinicia o loop
    }while(energia_restante > bought_energy);//NEEDS FIX -> Input validaton

    return energia_restante;

}

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

//Função em que se vai inserir um valor em kwh e será convertido p kz
double kWh_to_kz(double kWh_value){
    constexpr double _1kWh {12.8};
    double energia_em_kz {kWh_value * _1kWh};
    return energia_em_kz;

}

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

    return 0;
}