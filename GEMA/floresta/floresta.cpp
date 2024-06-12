#include <iostream>

int main(void)
{
    int T, M, A;
    std::cin >> T;
    std::cin >> M;
    std::cin >> A;

    int cont = 0;
    while (T < A)
    {
        T = T*M + T;
        cont++;
    }
    std::cout << cont << std::endl;
}