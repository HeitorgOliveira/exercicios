#include <iostream>

int main ()
{
    int n, a, b;
    std::cin >> n;
    for (int i = 0; i < n+1; i++)
    {
        std::cin >> a >> b;
    }
    std::cout << (n-4)/2;
} 