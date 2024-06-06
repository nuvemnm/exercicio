#ifndef ESTAGIARIO
#define ESTAGIARIO  
#include <string>
#include "funcionario.hpp"
using namespace std;

class Estagiario : public Funcionario{
    private:
        int desconto;
        double salarioTotal;
    public:
        Estagiario(string nome, int Id);
        double calcularSalarioTotal(int desconto);
};

#endif