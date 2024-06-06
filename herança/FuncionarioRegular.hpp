#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include <string>
using std::string;
#include "Funcionario.hpp"

class FuncionarioRegular:public Funcionario{
        public:
            FuncionarioRegular(string nome, int id, double salarioBase);
            double calcularSalarioTotal();
};  

#endif