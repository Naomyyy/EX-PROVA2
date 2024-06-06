#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::vector;

#include "Veiculo.hpp"
#include "Van.hpp"
#include "Caminhao.hpp"

int main(){

    Veiculo v1("Fiat","Uno", 4);
    Van v2("Volkswagen","Van",10,16);
    Caminhao v3("Ford","Caminhao", 20,6);

    vector<Veiculo*> veiculos;
    veiculos.push_back(&v1);
    veiculos.push_back(&v2);
    veiculos.push_back(&v3);

    for(auto& v : veiculos)
    {
       v->exibirDados();
    } 

    return 0;
}