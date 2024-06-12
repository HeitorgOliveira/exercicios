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
void free_products(Product* products, int cases);
void sort(Product *products, int cases);
void free_products(Product* products, int cases);
void sort(Product *products, int cases);

int main(void)
{
    int cases;
    scanf("%i", &cases);
    if (cases == 0)
    {
        printf("Sem produtos a serem cadastrados\n");
        return -1;
    }
    Product *products;
    products = allocate_products(cases);
    if (products == NULL) return -1;
    sort(products, cases);
    sort(products, cases);
    for (int i  = 0; i < cases; i++)
    {
        printf("%s %i\n", products[i].content, products[i].code);
    }
    free_products(products, cases);
    free_products(products, cases);
}

Product *allocate_products(int cases)
{
    Product *products = (Product *) malloc(sizeof(Product) * cases);
    if (products == NULL) return NULL;
    for(int i = 0; i < cases; i++)
    {
        products[i].content = (char*) malloc(sizeof(char) * 200);
        if (products[i].content == NULL)
        {
            for(int j = 0; j < i; j++)
            {
                free(products[j].content);
            }
            free(products);
            return NULL;
        }
        scanf("%i %i %199s", &products[i].ip, &products[i].code, products[i].content);
        if (products[i].content == NULL)
        {
            for(int j = 0; j < i; j++)
            {
                free(products[j].content);
            }
            free(products);
            return NULL;
        }
        scanf("%i %i", &products[i].ip, &products[i].code);
        getchar();
        fgets(products[i].content, 200, stdin);
        size_t len = strlen(products[i].content);
        if (len > 0 && products[i].content[len - 1] == '\n') {
            products[i].content[len - 1] = '\0';
        }
    }
    return products;
}

void sort(Product *products, int cases)
{
    Product aux;
    for (int i = 0; i < cases; i++)
    {
        int trocou = 0;
        for (int j = i+1; i < cases; j++)
        {
            if (products[i].ip >= products[j].ip)
            {
                aux = products[i];
                products[i] = products[j];
                products[j] = aux;
                trocou++;
            }
        }
        if (!trocou) break;
    }
}

void free_products(Product* products, int cases)
{
    for (int i = 0; i < cases; i++)
    {
        free(products[i].content);
    }
    free(products);
}
