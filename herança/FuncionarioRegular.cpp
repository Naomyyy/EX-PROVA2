#include <stdlib.h>
#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase)
{
  this->nome=nome;
  this->id=id;
  this->salarioBase=salarioBase;
}

double FuncionarioRegular::calcularSalarioTotal()
{
    return salarioBase;

}