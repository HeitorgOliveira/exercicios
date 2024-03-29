#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::string sequencia;
    std::getline(std::cin, sequencia);
    std::vector<int> numeros;
    
    std::stringstream ss(sequencia);
    int numero;

    while ( ss >> numero)
    {
        numeros.push_back(numero);
    }
    int tam = size(numeros), maior = 0;
    for (int i = 0; i < tam; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    std::cout << maior;
    return 0;
}