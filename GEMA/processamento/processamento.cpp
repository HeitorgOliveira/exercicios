#include <iostream>
#include <string>

int main(void)
{
    int t, n;
    std::cin >> t;
    //char palavra[] = "";
    std::string resposta, palavra;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::cin >> palavra;
        for (int j = 0; j < n-1; j++)
        {
            //printf("%c\n\n", palavra[n-j-1]);
            if (palavra[n-j-1] == 'b' || palavra[n-j-1] == 'c' || palavra[n-j-1] == 'd')
            {
                //juntar letra de índice j e suas 2 anteriores em uma string de resposta
                //aumentar o contador em 2
                resposta += '.';
                resposta += palavra[n-j-1];
                resposta += palavra[n-j-2];
                resposta += palavra[n-j-3];
                j += 2;
            }
            if (palavra[n-j-1] == 'a'|| palavra[n-j-1] == 'e')
            {
                //juntar letra de indice j e 1 anterior em uma string de resposta
                //aumentar o contador em 1
                resposta += '.';
                resposta += palavra[n-j-1];
                resposta += palavra[n-j-2];
                j++;
            }
        }
        //ler string resposta de trás para frente ignorando o ultimo caracter ('.')
        for (int j = sizeof(resposta)-1; j  > 0; j--)
        {
            printf("%c", resposta[j]);
        }
        printf("\n");
        resposta = "";
    }
}