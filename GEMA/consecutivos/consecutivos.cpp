#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    int N, cont = 0, aux = 0;
    std::string str;

    std::cin >> N;
    std::cin.ignore();
    std::getline(std::cin, str);

    std::vector <long int> numeros;
    std::stringstream ss(str);
    long int numero;

    while (ss >> numero)
    {
        numeros.push_back(numero);
    }
    int i = 0;
    do
    {
        if (numeros[i+1] == numeros[i])
        {
            aux++;
        }
        else
        {
            if (aux > cont)
            {
                cont = aux;
                aux = 1;
            }
        }
        i++;
    }
    while (i < N);
    std::cout << cont;
}