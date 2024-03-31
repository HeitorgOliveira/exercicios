#include <iostream>
#include <string>

int main()
{
    int t, rating;
    std::cin >> t;
    int divisao[t];
    for (int i = 0; i < t; i++)
    {
        std::cin >> rating;
        if(rating <= 1399)
        {
            divisao[i] = 4;
        }
        else if (1400 <= rating && rating <= 1599)
        {
            divisao[i] = 3;
        }
        else if (1600 <= rating && rating <= 1899)
        {
            divisao[i] = 2;
        }
        else if (1900 <= rating)
        {
            divisao[i] = 1;
        }
    }
    for (int i = 0; i < t; i++)
    {
        std::cout << "Division " << divisao[i] << "\n";
    }
}