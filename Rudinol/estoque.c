#include <stdio.h>

int cont = 0;

int main()
{
    char entrada[3];
    entrada[0] = '0';
    while (entrada[0] != '3')
    {
        scanf("%[^\n]%*c", entrada);
        if (entrada[0] == '1')
        {
            cont++;
        }
        else if (entrada[0] == '2')
        {
            printf("%i\n", cont);
        }
        else{
            continue;
        }
    }
}