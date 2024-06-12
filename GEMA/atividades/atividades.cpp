#include <iostream>

int main(void)
{
    int e, a, c;
    std::cin >> e;
    std::cin >> a;
    std::cin >> c;

    int tot = 2*e + 3*a + 5*c;

    if (tot < 100)
        std::cout << "N" << std::endl;
    else if(tot >= 100 && tot < 150)
        std::cout << "B" << std::endl;
    else if(tot >= 150 && tot < 200)
        std::cout << "S" << std::endl;
    else
        std::cout << "O" << std::endl;
}