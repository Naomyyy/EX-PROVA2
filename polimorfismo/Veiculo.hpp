#ifndef VEICULO
#define VEICULO

#include <string>
using std::string;


class Veiculo {
    
    protected:
        std::string marca;
        std::string modelo;
        int capacidade; // Capacidade de carga em toneladas
    
    public:
        Veiculo(const std::string& marca, const std::string& modelo, int capacidade);
        virtual void exibirDados() const;
    
};

#endif