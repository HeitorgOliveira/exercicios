#include <iostream>

int main()
{
    int n, a,b,c;
    std::cin >> n;
    char respostas[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b >> c;
        if (a+b == c)
        {
            respostas[i] = '+';
        }
        else if (a-b == c)
        {
            respostas[i] = '-';
        }
    }
    int tam = sizeof(respostas);
    for (int i = 0; i < tam; i++)
    {
        std::cout << respostas[i] << '\n';
    }

}