#include <iostream>
#include <vector>
#include <sstream>
#include <math.h>

int main()
{
    int N;
    std::string X;
    std::vector <float> numeros;

    std::cin >> N;
    std::cin.ignore();
    std::getline(std::cin, X);

    std::stringstream ss(X);
    float numero;

    while(ss >> numero)
    {
        numeros.push_back(numero);
    }
    int aux = size(numeros);
    for (int i =0; i < aux; i++)
    {
        printf("%.4f\n", sqrt(numeros[i]));
    }
}