#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *A;
    A = malloc(sizeof(char) * 131);
    char *B;
    B = malloc(sizeof(char) * 131);
    char * palavra;
    palavra = malloc(sizeof(char) * 20);
    int cont = 0;
    char *aux;
    aux = malloc(sizeof(char) * 261);

    A[sizeof(A)] = 0;
    B[sizeof(B)] = 0;

    fgets(A, 131, stdin);
    fgets(B, 131, stdin);
    fgets(A, 131, stdin);
    strcpy(aux, A);

    

    free(A);
    free(B);
    free(aux);
    free(palavra);
}