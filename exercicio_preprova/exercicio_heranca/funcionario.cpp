#include "funcionario.hpp"
#include <iostream>

double Funcionario::salarioBase = 0;

Funcionario::Funcionario(string nome, int Id) : nome(nome), Id(Id){
}

double Funcionario::setSalario(double salario){
    return this->salarioBase = salario;
}

double Funcionario::calcularSalarioTotal(){
    return salarioBase;
}