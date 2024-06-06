#include "funcionario.hpp"
#include "estagiario.hpp"

Estagiario::Estagiario(string nome, int Id) : Funcionario(nome, Id){
    
}

double Estagiario::calcularSalarioTotal(int desconto){
    salarioTotal = salarioBase - desconto;
    return salarioTotal; 
}