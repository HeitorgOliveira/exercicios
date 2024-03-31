#include <iostream>

int main()
{
    long int n, k;
    int divisao;

    std::cin >> n >> k;
    divisao = n/k;
    std::cout << k * (divisao+1);
}