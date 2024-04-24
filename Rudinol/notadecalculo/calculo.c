#include <stdio.h>

int main(void)
{
    int situacao = -1;
    float p1, p2, e1, e2, e3, e4, media;
    scanf("%f %f %f %f %f %f", &p1, &p2, &e1, &e2, &e3, &e4);
    media = (p1 + p2 + (e1 + e2 + e3 + e4)/4)/3;
    if (e1 + e2 + e3 + e4 == 0)
    {
        media = -1;
    }
    if (media >= 5)
    {
        situacao = 1;
    }
    else if (media >= 3)
    {
        situacao = 0;
    }
    else
    {
        situacao = -1;
    }
    switch (situacao)
    {
        case 1:
            printf("Aprovado\n");
            return 0;
            break;
        case 0:
            printf("Recuperacao\n");
            return 0;
            break;
        case -1:
            printf("Reprovado\n");
            return 0;
            break;
        default:
            break;
    }
    return 0;
}