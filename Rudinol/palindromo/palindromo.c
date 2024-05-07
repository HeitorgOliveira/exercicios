#include <stdio.h>

int main()
{
    int n, cont =0, passou = 0;
    char aux;
    scanf("%i", &n);
    char palavra[n];
    
    for(int i=0; i<n; i++){
        scanf(" %c", &palavra[i]);
    }
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int auxcont = i + 1;
            cont = 1;
            for (int j = i+1; j < n; j++)
            {
                if (palavra[i] == palavra[j])
                {
                    aux = palavra[j];
                    palavra[j] = palavra[auxcont];
                    palavra[auxcont] = aux;
                    i++;
                    auxcont++;
                }
            }
        }
        for (int j = n; j > 0; j--)
        {
            if (palavra[j] == palavra[j-1])
                cont++;
            else
            {
                if (cont % 2 == 1 && passou == 0)
                {
                    passou ++;
                }
                else if (cont % 2 == 1 && passou != 0)
                {
                    printf("Não\n");
                    return 0;
                }
                cont = 1;
            }
        }
        printf("Sim\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int auxcont = i + 1;
            cont = 1;
            for (int j = i+1; j < n; j++)
            {
                if (palavra[i] == palavra[j])
                {
                    aux = palavra[j];
                    palavra[j] = palavra[auxcont];
                    palavra[auxcont] = aux;
                    i++;
                    auxcont++;
                    cont++;
                }
            }
        
        }
        printf("Sim\n");
        return 0;
    }
}
