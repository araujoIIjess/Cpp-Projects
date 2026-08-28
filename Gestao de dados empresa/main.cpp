#include<iostream>
#include<array>
#include<string>
#include<cstdint>
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
    //Variavel que pede e guarda o nome do cliente
    std::string client_name {getClientName()};
    //Variavel que pede e guarda o email do cliente
    std::string client_email {getClientmail()};
    //Variável que guarda o NIF do cliente
    uint64_t client_nif {00000000000000};



    //Loop pedindo o nome do cliente
   /*do{
        //O loop se repete enquanto client_name for uma string vazia
        std::cout << "Insira o nome: ";
        //Pegando o nome e pondo na variavel
        std::getline(std::cin , client_name);//O std::ws serve para o getline ignorar os espaços em branco
    }while(client_name == "");*/

    //Pedindo o email do cliente
    
    //Loop pedindo o email do cliente
    /*do{
        //Loop se repete enquanto client_email for uma string vazia
        std::cout << "Insira o email do cliente: \n";
        //Adicionando o valor a variavel
        std::getline(std::cin, client_email);

        //Verificando o "@gmail.com" no email
        found = client_email.find("@gmail.com") == std::string::npos;

    //Condição para repetir o loop: não ter '@' no email ou o espaço estar vazio
    }while(client_email == "" || found);

    std::cout << "email: " << client_email;*/
    return 0;
}