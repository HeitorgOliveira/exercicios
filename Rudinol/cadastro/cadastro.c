#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_ENTRADA 200

typedef struct{
    char *nome, cpf;
    int idade;
    float dinheiro, credito, divida;
} Pessoa;

void validar(Pessoa *pessoa, char *entrada);

int main(void)
{
    int n;
    scanf("%i", &n);
    Pessoa *pessoas;
    pessoas = malloc(sizeof(Pessoa) * n);
    char entrada[MAX_ENTRADA];
    for(int i = 0; i < n; i++)
    {
        if(fgets(entrada, sizeof(char), stdin) != NULL)
        {
            validar(&pessoas[i], entrada);
        }
    }
}

void validar(Pessoa *pessoa, char *entrada)
{
    char * token;
    token = strtok(entrada, ", ");
}