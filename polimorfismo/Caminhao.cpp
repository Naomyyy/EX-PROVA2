#include <iostream>
#include "Caminhao.hpp"
#include <string>
using std::string;


Caminhao::Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos)
: Veiculo(marca, modelo, capacidade), eixos(eixos)
{

}

void Caminhao:: exibirDados() const{
    std::cout << "Caminhão - ";
    Veiculo::exibirDados();
    std::cout << "Eixos: " << eixos << "\n";
}