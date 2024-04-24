#include <stdio.h>
#include <stdio.h>


int main(void)
{
    long unsigned int x, resposta = 0, aux = 5;
    scanf("%lu", &x);
    while (aux < x)
    {
        resposta += x / aux;
        aux *= 5;
    }
    printf("%lu", resposta);
}