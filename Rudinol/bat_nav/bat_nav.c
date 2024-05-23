#include <stdio.h>
#define MAX 26
#define MAX2 676
#define ASIZE 65

void read_matrix(char matrix[][MAX], int size);
void read_coords(int coords, char coordsmatrix[MAX2][2]);
void evaluate(char matrix[][MAX], char coordsmatrix[MAX2][2], int size);
void print_matrices(char matrix[][MAX], int size);

int main(void)
{
    int size, coords;

    scanf("%i", &size);

    char matrix[MAX][MAX], coordsmatrix[MAX2][2];
    read_matrix(matrix, size);

    scanf("%i", &coords);
    read_coords(coords, coordsmatrix);
    evaluate(matrix, coordsmatrix, coords);
    print_matrices(matrix, size);

    return 0;
}

void read_matrix(char matrix[][MAX], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf(" %c", &matrix[i][j]);
        }
    }
}

void read_coords(int coords, char coordsmatrix[MAX2][2])
{
    for (int i = 0 ; i < coords; i++)
    {
        scanf(" %c %i", &coordsmatrix[i][0], &coordsmatrix[i][1]);
    }
}

void evaluate(char matrix[][MAX], char coordsmatrix[MAX2][2], int size)
{
    for (int i = 0 ; i < size; i++)
    {
        int row = coordsmatrix[i][0] - ASIZE;
        int column = coordsmatrix[i][1] - 1;

        if (matrix[row][column] == 'N')
        {
            matrix[row][column] = 'X';
            printf("acerto!\n");
        }
        else printf("erro!\n");
    }
}

void print_matrices(char matrix[][MAX], int size)
{
    for (int i = 0 ; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
