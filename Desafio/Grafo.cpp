#include <iostream>
#include "Grafo.hpp" 
#include <vector>
using std::vector;
using std::cout;
using std::endl;
 
 
Grafo::Grafo(int numVertices)
{
    this->numVertices=numVertices;
    vertices.resize(numVertices);
    for (int i = 0; i <numVertices; ++i) {
        vertices[i].v = i;
    }
}
 
void Grafo::adicionaAresta(int v, int a){
    if (v < numVertices && a < numVertices) {
        vertices[v].v=v;
        vertices[v].adjacentes.push_back(a);

        vertices[a].v=a;
        vertices[a].adjacentes.push_back(v);}

}

int Grafo::ehVizinho(int v,int a){
    if(v < numVertices && a < numVertices){
        for(int i=0;i<numVertices;i++){
            if(vertices[v].adjacentes[i]==a)
                return 1;
            }
            
    }
    return 0;

}

vector<int> Grafo::getVizinhos(int v)
{
     if (v < numVertices) {
        return vertices[v].adjacentes;
    }
    return {};
}

void Grafo::printVizinhos(int v)
{   
    cout << "Vizinhos do vértice "<< v << ": ";
    const auto& vizinhos = getVizinhos(v);
    for (int adj : vizinhos) {
        cout << adj << " ";
    }
    cout << endl;

}
            
    
void Grafo::verificaVizinho(int v,int a){
    if(ehVizinho(v,a)==1){
        cout << v <<" e "<< a<< " são vizinhos? " <<  " Sim" << endl;
    }else if(ehVizinho(v,a)==0) {
        cout << v <<" e "<< a<< " são vizinhos? " <<  " Não" << endl;}
   

    
}

