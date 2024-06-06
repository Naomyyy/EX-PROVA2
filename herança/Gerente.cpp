#include <stdlib.h>
#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase,double bonus)
{
  this->nome=nome;
  this->id=id;
  this->salarioBase=salarioBase;
  this->bonus=bonus;
}

double Gerente::calcularSalarioTotal()
{
    return salarioBase + bonus;

}