#ifndef GRAFO
#define GRAFO
#include <vector>
using std::vector;

class Grafo{
    private:
        int numVertices;
        
        struct Vertice
            {
                int v;
                vector<int> adjacentes;

            };

        vector<Vertice> vertices;
        

    public:
        Grafo(int numVertices);
        void adicionaAresta(int v, int a);
        
        int ehVizinho(int v, int a);
        void verificaVizinho(int v, int a);
        vector<int> getVizinhos(int v);
        void printVizinhos(int v);
        


};

#endif