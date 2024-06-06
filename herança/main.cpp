#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

int main()
{
    FuncionarioRegular reg("Naomy",0,5000);
    Gerente gerente("Maria",1,3000,4000);
    Estagiario estagiario("Gabriel", 2, 2000);

    cout <<"O salario da Funcionario Regular Naomy é: "<< reg.calcularSalarioTotal() << endl;
    cout <<"O salario da Gerente Maria é: "<< gerente.calcularSalarioTotal() << endl;
    cout <<"O salario de Estagiario Gabriel é: "<< estagiario.calcularSalarioTotal() << endl;

    return 0;


}



