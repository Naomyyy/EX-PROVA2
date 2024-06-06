#ifndef ESTAGIARIO
#define ESTAGIARIO

#include <string>
using std::string;
#include "Funcionario.hpp"

class Estagiario: public Funcionario{
        private:
            double salarioFixo;
        public:
            Estagiario(string nome, int id, double salarioBase);
            double calcularSalarioTotal();
};

#endif