#include "grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;
/*
Grafo :: Grafo(int linhas, int colunas) :  linhas(linhas), colunas(colunas){
    init.resize(linhas, std::vector<int>(colunas, 0));
}
*/


void Grafo :: criaVertice(){
    linhas++;
    colunas++;
    
    init.resize(linhas);
    for (int i = 0; i < linhas; ++i) {
        init[i].resize(colunas, 0); // Preenche nova coluna com zeros
    }
}

void Grafo :: criaAresta(int vertice1, int vertice2){
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            if(i == (vertice1-1) && j == (vertice2-1)){
                init[i][j] = 1;
            }
        }
        
    }

}

int Grafo :: verificaVizinhos(int vertice1, int vertice2, vector<vector<int>> matriz){
    if(init[vertice1][vertice2] == 1){
        cout<<"São vizinhos!!" << endl;
    }else{
        cout<<"Não sao vizinhos!!" << endl;
    }
    return 0;
}


int Grafo :: listaVertices(int vertice, int colunas, vector<vector<int>> matriz){
    for(int i = 0; i < colunas; i++){
        if(init[vertice-1][i] == 1){
            cout<<"O vértice " << i+1 << " é vizinho do vértice " << vertice << endl;
        }
    }
    return 0;
}

void Grafo :: printMatriz(){

    for(int j = 0; j < colunas; j++){
        if(j == 0){
            cout << " " << "  ";
        }
            cout << j+1 << " ";
        }
        cout << endl;
        cout << endl;
    for(int i = 0; i < linhas; i++){
        cout<< i+1 << "  "; 
        for(int k = 0; k < colunas; k++){
            
            cout << init[i][k] << " ";
        }
        cout << endl;
    }
    
}