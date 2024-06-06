#ifndef GERENTE
#define GERENTE

#include <string>
using std::string;
#include "Funcionario.hpp"

class Gerente: public Funcionario{
        private:
            double bonus;
        public:
            Gerente(string nome, int id, double salarioBase, double bonus);
            double calcularSalarioTotal();
};

#endif