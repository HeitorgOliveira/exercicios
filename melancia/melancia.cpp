#include <iostream>
#include <string>

int main()
{
    int w;
    std::cin >> w;
    std::string resultado = ((w % 2 == 0) && (w != 2)) ? "YES" : "NO";
    std::cout << resultado;
} 