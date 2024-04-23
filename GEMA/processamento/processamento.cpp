#include <iostream>

int main(void)
{
    int t, n, tamanhos[100];
    std::cin >> t;
    std::string palavra, respostas[100];
    for (int i = 0; i < t; i++)
    {
        respostas[i] = "";
        std::cin >> n;
        std::cin >> palavra;
        tamanhos[i] = n;
        for (int j = 0; j < n; j)
        {
            if((palavra[n-j] == 'a') || (palavra[n-j] == 'e'))
            {
                respostas[i] += '.' + palavra[n-j] + palavra[n-j-1];
                j += 2;
            }
            else if ((palavra[n-j] == 'b' || palavra[n-j] == 'c' || palavra[n-j] == 'd'))
            {
                respostas[i] += '.' + palavra[n-j] + palavra[n-j-1] + palavra[n-j-2];
                j += 3;
            }
            else
            {
                printf(palavra[n-j]);
                return 1;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        for(int j = 0; j < tamanhos[i]-1; j++)
        {
            printf("%c", respostas[i][tamanhos[i]-j]);
        }
        printf("\n");
    }
}