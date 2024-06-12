#include <cstring>
#include <iostream>
#include <sstream>
#include <string>

int verifica(std::string palavra, std::string letras);

int main(void)
{
    std::string frase, letras, palavra;
    int cont = 0;
    int *p = &cont;
    std::getline(std::cin, frase);
    std::istringstream stream(frase);
    std::cin >> letras;
    while (stream >> palavra)
        cont += verifica(palavra, letras);
    std::cout << cont << std::endl;
    return 0;
}

int verifica(std::string palavra, std::string letras)
{
    for(auto a: palavra)
    {
        for (auto b : letras)
        {
            if (a == b)
            {
                return 1;
            }
        }
    }
    return 0;
}
 