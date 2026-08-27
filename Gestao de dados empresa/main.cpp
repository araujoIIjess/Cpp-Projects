#include<iostream>
#include<array>
#include<string>

int main(){
    //Variavel para gurardar o nome do cliente
    std::string client_name {};
    
    //Variavel para guardar o email do cliente
    std::string client_email {};
    bool found {};

    //Loop pedindo o nome do cliente
    do{
        //O loop se repete enquanto client_name for uma string vazia
        std::cout << "Insira o nome: ";
        //Pegando o nome e pondo na variavel
        std::getline(std::cin , client_name);//O std::ws serve para o getline ignorar os espaços em branco
    }while(client_name == "");

    //Pedindo o email do cliente
    
    //Loop pedindo o email do cliente
    do{
        //Loop se repete enquanto client_email for uma string vazia
        std::cout << "Insira o email do cliente: \n";
        //Adicionando o valor a variavel
        std::getline(std::cin, client_email);

        //Verificando o '@' no email && verificando o "gmail" no email
        //Retorna true se não encontrar o '@' e o "gmail" e false se não os encontrar
        found = client_email.find("@gmail.com") == std::string::npos;//(client_email.find('@') == std::string::npos || client_email.find("gmail") == std::string::npos);

    //Condição para repetir o loop: não ter '@' no email ou o espaço estar vazio
    }while(client_email == "" || found);

    std::cout << "email: " << client_email;
    return 0;
}