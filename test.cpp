#include<iostream>
#include<string>
using namespace std;


std::string getClientName(){
    //Contagem dos erros -- 08/09/26
    int err_count {};
    /*Variável para verificar se a string do nome está vázia -- 08/09/26
        Variável que será true qndo a string estiver vazia e false quando a string não estiver vazia -- 11/09/26
    */
    bool empty {};
    //nome do cliente
    std::string client_name {};

    //Pedindo os dados do cliente e validando input
    do{
        /*
            Se a contagem de erros for diferente de 0 exibe uma mensagem diferente -- 09/09/26
        */
        if(err_count != 0){
            std::cout << "Insira um nome valido: " << '\n';
            std::getline(std::cin, client_name);
            
        }else{
            std::cout << "Insira o nome: " << '\n';
            std::getline(std::cin, client_name);
            //Se a string estiver vazia repete o loop
        }
        /*
            Se empty for true significa que a string está vazia -- 08/09/26
            adicionar futuramente uma verificação de nome em condições
        */
       //check_empty = client_name == "" ? is_empty = true : is_empty = false;
       empty = client_name.length() == 0;
    }while(empty);

    return client_name;
}

int main(){


    string a = getClientName();








    return 0;
}