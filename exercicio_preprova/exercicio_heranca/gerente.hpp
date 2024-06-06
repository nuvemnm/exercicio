#ifndef GERENTE
#define GERENTE
#include <string>
#include "funcionario.hpp"
using namespace std;

class Gerente : public Funcionario{
    private:
        int bonus;
        int mesesTrabalhados;
        double salarioTotal;
    public:
        Gerente(string nome, int Id);
        double calcularSalarioTotal(int bonus, int mesesTrabalhados);
};

#endif