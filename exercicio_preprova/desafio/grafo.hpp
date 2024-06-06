#ifndef GRAFO
#define GRAFO
#include <vector>

using namespace std;

class Grafo{
    public:
        int linhas = 0;
        int colunas = 0;
        int prox = 1;
        vector<int> vertices;
    public:
        vector<vector<int>> init;
        //Grafo(int linhas, int colunas);

        void criaVertice();
        void criaAresta(int vertice1, int vertice2);
        int verificaVizinhos(int vertice1, int vertice2, vector<vector<int>> matriz);
        int listaVertices(int vertice, int colunas, vector<vector<int>> matriz);
        void printMatriz();
};

#endif