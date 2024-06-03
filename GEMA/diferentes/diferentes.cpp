#include <iostream>
#include <set>

int main(void)
{
    int cont, num;
    std::set <int> numeros;
    std::cin >> cont;

    for (int i = 0; i < cont; i++)
    {
        std::cin >> num;
        numeros.insert(num);
    }
    std::cout << numeros.size() << std::endl;
}