#include "funcionario.hpp"
#include "funcReg.hpp"

FuncionarioReg::FuncionarioReg(string nome, int Id) : Funcionario(nome, Id){
    
}

double FuncionarioReg::calcularSalarioTotal(){
    salarioTotal = salarioBase;
    return salarioTotal;
}