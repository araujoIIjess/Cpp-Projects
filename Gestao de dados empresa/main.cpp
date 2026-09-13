#include<iostream>
#include<array>
#include<string>
#include<cstdint>
#include<cctype>
//unção para obter o nome do cliente
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

std::string getClientmail(){
    //email do cliente
    std::string client_email {};

    //validação do email
    bool found {};
    /*
        Sera true quando a string estiver vazia -- 13/09/26
    */
    bool empty {};

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
        //empty será true se a string estiver vazia
        empty = client_email.length() == 0;

    }while(empty || found); 

    return client_email;
}

std::string getClientId(){

    //Função pra ler e analisar o numero de BI do cliente
    constexpr int ID_LENGTH = 14;
    /*
        Variavel que guarda o número do BI do cliente -- 03/09/26
        nº do bilhete é composto por 14 dígitos
    */
    std::string id_number {};
    //Variável que vai verificar se o tamanho da string é o certo -- 03/09/26
    bool check_len {};
    /*
        Variável para fazer aparecer a mensagem de erro -- 06/09/26
    */
    int err_count {};
    
    /*
        Input do usuário/inserindo nº do bilhete -- 03/09/26
    */
    do{
        //Condição da exibicao da mensagem de erro -- 06/09/26
        if(err_count != 0){
            /*
                Caso a contagem de erros seja diferente de 0 exibe uma mensagem diferente -- 06/09/26
            */
            std::cout << "Insira um numero de BI valido: " << '\n';
            std::getline(std::cin >> std::ws, id_number);
        }else{

            std::cout << "Insira o numero do BI: " << '\n';
            std::getline(std::cin >> std::ws, id_number);//Armazenando o numero na variavel
        }
        /*
            Validação de input -- 03/09/26
        --------------------------------------
        Flag do loop. Enquanto check_len não for true o loop se repete -- 04/09/26
        e mesmo que a string estiver vazia o loop se repete -- 06/09/26
        */
        check_len = id_number.length() == ID_LENGTH; 
        //err_count é incrementada caso check_len seja falsa, exibe mensagem de erro -- 06/09/26
        if(!check_len) err_count++;

    }while(!check_len);

    return id_number;
}

int main(){
    std::string id_number {getClientName()};


    return 0;
}