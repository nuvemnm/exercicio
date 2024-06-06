#include <vector>
#include <iostream>
#include <string>
#include "veiculo.cpp"
#include "caminhao.cpp"
#include "van.cpp"

int main(){
    
    std::vector<Veiculo*> veiculos;
    veiculos.push_back(new Caminhao("Volvo", "FMX", 30, 2));
    veiculos.push_back(new Van("Volkswagen", "Kombi", 1, 9));
    veiculos.push_back(new Caminhao("Volkswagen", "Delivery Express", 40, 3));
    veiculos.push_back(new Van("Citroën", "Jumper", 2, 16));
    veiculos.push_back(new Caminhao("Iveco", "S-Way", 30, 2));
    veiculos.push_back(new Van("Mercedes-Benz", "Sprinter 313", 4, 12));

    for(Veiculo* v : veiculos){
        v->exibirDados();
    }
}