#include "user_validation_h.h"
//Aqui vão estar todas as funções de validação de input
//Vão sempre retornar true ou false

/*
    Função para verificar o tamanho da string -- 21/09/26
    Parametros:
    - A string a analizar, o inicio da string, o fim da string
    personal reminder: por favor move isto pro notion folk😭✌🏽
*/
bool checkId_lenght(std::string id){
    constexpr std::size_t MAX_LENGHT {14};
    bool right_len {id.length() == 14 ? true : false};

    return right_len;


}