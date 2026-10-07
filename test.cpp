#include<iostream>
#include<string_view>
#include<string>
#include<cctype>
constexpr std::size_t numSEQ_LENGTH {9};
//2 letras -- 25/09/26
constexpr std::size_t lettrSEQ_LENGTH {2};
//3 caracteres de controle -- 25/09/26
constexpr std::size_t ctrlSEQ_LENGTH {3};
//comprimento total do bi -- 25/09/26
constexpr std::size_t ID_LENGTH {numSEQ_LENGTH + lettrSEQ_LENGTH + ctrlSEQ_LENGTH};

bool chechSeqCtrlnumbers(std::string_view id){
    //Função que vai verificar os dígitos de controlo
    std::size_t string_end {ID_LENGTH};
    for(std::size_t i {numSEQ_LENGTH + lettrSEQ_LENGTH}; i < string_end; i++){
        if(!(std::isdigit(static_cast<unsigned char>(id[i])))){
            return false;
        }
    }

}

int main(){

    return 0;
}