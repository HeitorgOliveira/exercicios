#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
    {
        printf("nenhum!\n");
    }
    else if (a != c || b != d)
    {
        printf("nenhum!\n");
    }
    else if (a == b && a == c && a == d)
    {
        printf("quadrado!\n");
    }
    else
    {
        printf("retangulo!\n");
    }
    return 0;
}