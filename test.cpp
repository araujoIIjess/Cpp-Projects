#include <iostream>

double kWh_to_kz(double kWh_value){
    constexpr double _1kWh {12.8};
    double energia_em_kz {kWh_value * _1kWh};
    return energia_em_kz;

}

int main(){
    std::cout << kWh_to_kz(2500);
    return 0;
}