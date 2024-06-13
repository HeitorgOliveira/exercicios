#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char *nome;
    char *cpf;
    int idade;
    float dinheiro;
    float credito;
    float divida;
} Pessoa;

void exibedados(Pessoa *pessoas, int size);
void freearray(Pessoa *pessoas, int size);

int main(void)
{
    int n, dividas=0;
    scanf("%i", &n);
    Pessoa *pessoas;
    pessoas = malloc(sizeof(Pessoa) * n);
    if (pessoas == NULL)
    {
        printf("Erro ao alocar ponteiro\n");
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        pessoas[i].nome = malloc(sizeof(char) * 100);
        pessoas[i].cpf = malloc(sizeof(char) * 12);
        if (pessoas[i].nome ==NULL || pessoas[i].cpf == NULL) 
        {
            printf("Erro ao alocar ponteiro\n");
            exit(1);
        }
        scanf(" %99[^,] , %11[^,] , %i , %f , %f", pessoas[i].nome, pessoas[i].cpf, &pessoas[i].idade, &pessoas[i].dinheiro, &pessoas[i].credito);
        "%f", pessoas[i].divida = pessoas[i].dinheiro - pessoas[i].credito;
        setbuf(stdin, NULL);
    }
    exibedados(pessoas, n);
    freearray(pessoas, n);
}


void exibedados(Pessoa *pessoas, int size)
{
    Pessoa endividados[size];
    int cont=0;
    for(int i = 0; i < size; i++)
    {
        if(pessoas[i].divida < 0)
        {
            endividados[cont] = pessoas[i];
            cont++;
        }
        printf("Dados da pessoa %i:\nNome: %s\nCPF: %s\nIdade: %i\nSaldo: %.2f\nCredito: %.2f\n\n", i+1 , pessoas[i].nome, pessoas[i].cpf, pessoas[i].idade, pessoas[i].dinheiro, pessoas[i].credito);
    }
    if (cont)
    {
        printf("Pessoas endividadas:\n");
        for(int i =0 ; i < cont; i++)
        {
            if (i == cont-1)
                printf("Nome: %s\nCPF: %s\nDivida: %.2f", endividados[i].nome, endividados[i].cpf, endividados[i].divida * -1);
            else
                printf("Nome: %s\nCPF: %s\nDivida: %.2f\n\n", endividados[i].nome, endividados[i].cpf, endividados[i].divida * -1);
        }
    }
    else
        printf("Pessoas endividadas:\nNenhuma pessoa endividada encontrada.\n");
    return;
}

void freearray(Pessoa *pessoas, int size)
{
    for(int i = 0; i < size; i++)
    {
        free(pessoas[i].nome);
        free(pessoas[i].cpf);
    }
    free(pessoas);
}