#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    for (int i = 1; i < x+1; i++)
    {
        if (x % i == 0)
        {
            std::cout << i << " ";
        }
    }
}