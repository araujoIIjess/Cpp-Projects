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


double EnergyValueSelection(){
    //Funçao para o usuario escolher se quer ver o valor em kz ou kwh
    /*
        b = bought
        r = restant
    */
    double bEnergy_kz {};
    double rEnergy_kz {};
    int opc {};

    std::cout << "Prima 1 se deseja inserir o valor em kz, prima 2 se deseja inserir em kWh \n";
    std::cin >> opc;

    switch(opc){
        case 1:
            bEnergy_kz = getBoughtEnergy();
            rEnergy_kz = getRestantEnergy(bEnergy_kz);
            
        break;
    }
}

