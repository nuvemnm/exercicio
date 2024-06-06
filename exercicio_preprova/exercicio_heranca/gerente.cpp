#include "funcionario.hpp"
#include "gerente.hpp"

Gerente::Gerente(string nome, int Id) : Funcionario(nome, Id){
    
}

double Gerente::calcularSalarioTotal(int bonus, int mesesTrabalhados){
    if(mesesTrabalhados%12 == 0){
        salarioTotal = salarioBase + bonus;
        return salarioTotal;
    }
    else{
        return salarioBase;
    }
    
}