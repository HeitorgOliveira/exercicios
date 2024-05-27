#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int ip;
    int code;
    char *content;
} Product;

Product *allocate_products(int cases);

int main(void)
{
    int cases;
    scanf("%i", &cases);
    if (cases == 0)
    {
        printf("Sem produtos a serem cadastrados\n");
    }
    Product *products;
    products = allocate_products(cases);
    if (products == NULL) return -1;
    for (int i  = 0; i < cases; i++)
    {
        printf("IP: %i\nCODE: %i\nCODIGO: %s\n", products[i].ip, products[i].code, products[i].content);
    }
}

Product *allocate_products(int cases)
{
    Product *products = (Product *) malloc(sizeof(Product) * cases);
    if (products == NULL) return NULL;
    for(int i = 0; i < cases; i++)
    {
        products[i].content = (char*) malloc(sizeof(char) * 200);
        if (products[i].content == NULL) return NULL;
        scanf("%i %i %s", &products[i].ip, &products[i].code, products[i].content);
    }
    return products;
}