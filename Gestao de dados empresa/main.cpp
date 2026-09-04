#include<iostream>
#include<array>
#include<string>
#include<cstdint>
#include<cctype>
//unção para obter o nome do cliente
std::string getClientName(){
    //nome do cliente
    std::string client_name {};

    //Pedindo os dados do cliente e validando input
    do{
        std::cout << "Insira o nome: " << '\n';
        std::getline(std::cin, client_name);
    //Se a string estiver vazia repete o loop
    }while(client_name == "");

    return client_name;
}

std::string getClientmail(){
    //email do cliente
    std::string client_email {};

    //validação do email
    bool found {};

    //Pedindo o email e validando
    do{
        std::cout << "Insira o email: " << '\n';
        std::getline(std::cin, client_email);
        //Verificando o dominio do email
        /*
            Se não tiver "@gmail" no email inserido, found retorna true. Se tiver "@gmail" retorna false
            Se found for false o loop termina. Mas se for true o loop recomeça
        */
        found = client_email.find("@gmail") == std::string::npos;

    }while(client_email == "" || found);

    return client_email;
}

int main(){
    //Função pra ler e analisar o numero de BI do cliente
    /*
        Variavel que guarda o número do BI do cliente -- 03/09/26
        nº do bilhete é composto por 14 dígitos
    */
    std::string id_number {};
    //Variável que vai verificar se o tamanho da string é o certo -- 03/09/26
    bool check_len {};
    
    /*
        Input do usuário/inserindo nº do bilhete -- 03/09/26
    */
    do{
        std::cout << "Insira o numero do BI: " << '\n';
        std::getline(std::cin, id_number);//Armazenando o numero na variavel
        /*
            Validação de input -- 03/09/26
        --------------------------------------
        Flag do loop, enquanto check_len for false o loop se repete, id_number deve ter exatamente 14 caracteres    
        */
        check_len = id_number.length() != 14;

        
    }while(check_len);

    return 0;
}