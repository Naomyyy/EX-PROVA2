#include <iostream>
#include "Grafo.hpp"

int main() {

    Grafo grafo(5);
    //Considerei o mesmo grafo do exercicio, porém começando do 0 até 4. Isso serviu para facilitar criar o vetor de adjacentes
    grafo.adicionaAresta(0, 1);
    grafo.adicionaAresta(0, 4);
    grafo.adicionaAresta(1, 4);
    grafo.adicionaAresta(1, 2);
    grafo.adicionaAresta(1, 3);
    grafo.adicionaAresta(2, 3);
    grafo.adicionaAresta(3, 4);

    grafo.verificaVizinho(2,1);
    grafo.verificaVizinho(0,4);
    grafo.verificaVizinho(2,4);

    grafo.printVizinhos(1);
    grafo.printVizinhos(0);

    return 0;
}