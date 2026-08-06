#include <iostream>
#include "energia_input.h"
//#include "energia_conv.h"
//Funções relacionadas com input
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
#if 0
void EnergyValueSelection(double kz_value, double kWh_value){
    /*Função que determina se o usuario quer ver a energia em kWh ou kz
    Inutil por enquanto*/
    int opc {};
    std::cout << "Deseja ver a energia em kWh [1] ou em kz [2] \n";
    std::cin >> opc;
    if(opc == 1){
        k
    }
}
#endif
