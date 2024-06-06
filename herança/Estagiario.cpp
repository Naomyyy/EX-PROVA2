#include <stdlib.h>
#include "Estagiario.hpp"

Estagiario::Estagiario(string nome, int id, double salarioBase)
{
  this->nome=nome;
  this->id=id;
  this->salarioBase=salarioBase;
  this->salarioFixo=salarioBase/2;
}

double Estagiario::calcularSalarioTotal()
{
    return salarioFixo;

}