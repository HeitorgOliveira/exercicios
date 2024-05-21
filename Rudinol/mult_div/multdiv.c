#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%i", &n);
    scanf("%i", &m);

    int m1[n][n];
    int m2[m][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%i", &m1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%i", &m2[i][j]);
        }
    }

    printf("Matrizes: \n");

    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n ; j++)
        {
            printf("%i ", m1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i ++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", m2[i][j]);
        }
        printf("\n");
    }

    int passou = 0;
    for (int i = 0; i < n; i++)
    {  
        if (m1[i][i] == 0)
        {
            passou++;
            break;
        }
        for (int j = 0; j < n; j++)
        {
            if (i != j && m1[i][j] != 0)
            {
                passou++;
                break;
            }
        }
    }

    passou ? printf("A matriz 1 nao eh diagonal\n") : printf("A matriz 1 eh diagonal\n");

    passou = 0;
    for (int i = 0; i < m; i++)
    {
        if (m2[i][i] == 0)
        {
            passou++;
            break;
        }
        for (int j = 0 ; j < m; j++)
        {
            if (i != j && m2[i][j] != 0)
            {
                passou++;
                break;
            }
        }
    }
        
    passou ? printf("A matriz 2 nao eh diagonal\n") : printf("A matriz 2 eh diagonal\n");

    if (n != m) {
        printf("Matrizes de tamanho incompativel\n");
        return 0;
    }
    printf("Matriz multiplicada:\n");
    int matriz[n][m];
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m ; j++)
        {
            for (int k = 0; k < n; k++)
            {
                aux += m1[i][k] * m2[k][j];
            }
            matriz[i][j] = aux;
            aux = 0;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
            
}
