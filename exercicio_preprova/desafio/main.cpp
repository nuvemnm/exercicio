#include "grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main(){

    
    //Grafo matriz(5, 5, {{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}});
    Grafo matriz;
    matriz.criaVertice();
    matriz.criaVertice();
    matriz.criaVertice();
    matriz.criaVertice();
    matriz.criaVertice();

    matriz.criaAresta(1,2);
    matriz.criaAresta(1,5);
    matriz.criaAresta(2,1);
    matriz.criaAresta(2,3);
    matriz.printMatriz();
    matriz.listaVertices(1, matriz.init);
    matriz.verificaVizinhos(1,2,matriz.init);

    //matriz.verificaVizinhos(3,5,matriz.init);
    //matriz.listaVertices(4,5, matriz.init);
    
}