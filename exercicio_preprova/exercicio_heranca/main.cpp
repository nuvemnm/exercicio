#include <iostream>
#include <string>
#include "funcionario.hpp"
#include "funcReg.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"

using namespace std;

int main(){
    Funcionario funcionarioGeral("admin", 1111);
    FuncionarioReg regular("Cláudio Barbosa Campos", 7645);
    Gerente gerente("Júlia Lopez Dias", 1289);
    Estagiario estagiario("Roberta Vieira Costa", 9743);

    funcionarioGeral.setSalario(1700);

    double info = regular.calcularSalarioTotal();
    double info2 = gerente.calcularSalarioTotal(600, 24);
    double info3 = estagiario.calcularSalarioTotal(400);
    cout<< "Salário total Funcionario Regular: "<< info << endl;
    cout<< "Salário total Gerente: "<< info2 << endl;
    cout<< "Salário total Estagiário: "<< info3 << endl;
}