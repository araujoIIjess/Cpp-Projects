#include<iostream>
#include<string>

int main(){
    std::string ex {};

    std::cout << ": \n";
    std::getline(std::cin, ex);
    std::cout << "Pos: " << ex.find('@');
    //if(ex.find('@'))
    return 0;
}