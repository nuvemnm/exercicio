#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>

using namespace std;

class Funcionario {
    private:
        string nome;
        int Id;
    protected:
        static double salarioBase;
    public:
        Funcionario(string nome, int Id);
        virtual double setSalario(double salario);
        double calcularSalarioTotal();
};

#endif