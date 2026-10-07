#include "input_validation_h.h"
//Aqui vão estar todas as funções de validação de input
//Vão sempre retornar true ou false

/*
    Função para verificar o tamanho da string -- 21/09/26
    Parametros:
    - A string a analizar, o inicio da string, o fim da string
    personal reminder: por favor move isto pro notion folk😭✌🏽
*/

//9 primeiros digitos -- 25/09/26
constexpr std::size_t numSEQ_LENGTH {9};
//2 letras -- 25/09/26
constexpr std::size_t lettrSEQ_LENGTH {2};
//3 caracteres de controle -- 25/09/26
constexpr std::size_t ctrlSEQ_LENGTH {3};
//comprimento total do bi -- 25/09/26
constexpr std::size_t ID_LENGTH {numSEQ_LENGTH + lettrSEQ_LENGTH + ctrlSEQ_LENGTH};

std::string toUpper(std::string id){
    //Função para tornar toda a string maiuscula -- 25/09/26
    for(std::size_t i {}; i < id.length(); i++){
        id[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(id[i])));
    }
    //Retorna o bi todo maiusculo -- 25/09/26
    return id;
}

bool checkId_length(std::string_view id){
    //Funçao para verificar o tamanho da string
    bool right_len {id.length() == ID_LENGTH ? true : false};

    return right_len;
}

bool checkSeqNumbers(std::string_view id){
    //Está função so será executada caso check_len seja true
    //Funçáo para check os primeiros 9 digitos
    //se forem numericos retorna true
    //se não forem retorna false
    for(std::size_t i {}; i < numSEQ_LENGTH; i++){
        if(!std::isdigit(static_cast<unsigned char>(id[i]))){
            return false;
        }
    }
    return true;
}

bool checkSeqLetters(std::string_view id){
    //Esta função só será executada caso check_len seja true
    //Função que verifica os digitos 9-10
    //e verifica se são letras
    //se forem, retorna true,otherwise retorna false
    //string_end é igual a 11
    constexpr std::size_t loop_end{numSEQ_LENGTH + lettrSEQ_LENGTH};
    //Se na posição i não for uma letra, retorna false
    for(std::size_t i {numSEQ_LENGTH}; i < loop_end; i++){
        if(!(std::isalpha(static_cast<unsigned char>(id[i])))){
            return false;
        }
    }
    return true;
}

bool checkSeqCtrlnumbers(std::string_view id){
    //Função que vai verificar os dígitos de controlo
    //Começa a contar a partir do 11º indice e termina no 14º
    constexpr std::size_t loop_end {ID_LENGTH};
    for(std::size_t i {numSEQ_LENGTH + lettrSEQ_LENGTH}; i < loop_end; i++){
        if(!(std::isdigit(static_cast<unsigned char>(id[i])))){
            return false;
        }
    }

    return true;
}