#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ** allocatematrix(int size);
void assignvalues(int ** matrix, int size);
void printmatrix(int ** matrix, int size);
void freematrix(int **matrix, int size);

int main(void)
{
    int size;
    scanf("%i", &size);
    size = sqrt(size);
    int ** matrix;
    matrix = allocatematrix(size);
    if (matrix == NULL) return -1;
    assignvalues(matrix, size);
    printmatrix(matrix, size);
    freematrix(matrix, size);
    return 0;
}

int ** allocatematrix(int size)
{
    int ** matrix = (int**) malloc(sizeof(int*) * size);
    for (int i = 0 ; i < size; i++)
    {
        matrix[i] = (int*) malloc(sizeof(int) * size); 
    }
    return matrix;
}


void assignvalues(int ** matrix, int size)
{
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%i ", &matrix[i][j]);
        }
    }
}

void printmatrix(int **matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

void freematrix(int ** matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}