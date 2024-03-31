#include <iostream>

int main()
{
    int k,w;
    long int n, preco;
    std::cin >> k >> n >> w;
    preco = w*(w+1)/2;
    preco *= k;
    if (n >= preco)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << (preco - n);
    }
}