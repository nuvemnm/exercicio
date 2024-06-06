#ifndef FUNCREG
#define FUNCREG
#include <string>
#include "funcionario.hpp"
using namespace std;

class FuncionarioReg : public Funcionario{
    private:
        double salarioTotal;
    public:
        FuncionarioReg(string nome, int Id);
        double calcularSalarioTotal();
};

#endif