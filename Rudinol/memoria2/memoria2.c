#include <stdio.h>

int main(void)
{
    int n, m, resultado = 0, aux = 1;
    scanf("%i %i", &n, &m);
    int v1[n], v2[m];
    for(int i = 0; i < n; i++)
    {
        aux *= 2;
    }
    for (int i = 0; i < n; i++)
    {   
        aux /= 2;
        scanf("%i", &v1[n]);
        v1[n] = aux * v1[n];
        resultado += v1[n];
    }
    aux = 1;
    for (int i = 0; i < m; i++)
    {
        aux *= 2;
    }
    for (int i = 0; i < m; i++)
    {
        aux /= 2;
        scanf("%i", &v2[m]);
        v2[m] = aux * v2[m];
        resultado += v2[m];
    }
    printf("%i", resultado);
}