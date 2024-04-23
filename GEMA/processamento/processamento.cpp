#include <iostream>

int main(void)
{
    int t, n;
    std::string palavra;
    std::cin >> t;
    std::string respostas[100];
    for (int i = 0; i < t; i++)
    {
        respostas[t] = "";
        std::cin >> n;
        std::cin >> palavra;
        for (int j = 0; j < n; j)
        {
            if((palavra[n-j] == 'a') || (palavra[n-j] == 'e'))
            {
                respostas[t] += '.' + palavra[n-j] + palavra[n-j-1];
                j += 2;
            }
            else if ((palavra[n-j] == 'b' || palavra[n-j] == 'c' || palavra[n-j] == 'd'))
            {
                respostas[t] += '.' + palavra[n-j] + palavra[n-j-1] + palavra[n-j-2];
            }
            else
            {
                return 1;
                j+= 3;
            }
        }
    }
}