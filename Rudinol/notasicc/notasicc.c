    #include <stdio.h>

    void sort(float *unsorted, int size);

    int main(void)
    {
        int alunos, notas;
        scanf("%i %i", &alunos, &notas);

        float sala[alunos][notas];
        float medias[alunos];
        float aux;
        for (int i  = 0; i < alunos; i++)
        {
            aux = 0;
            for (int j = 0; j < notas; j++)
            {
                scanf("%f", &sala[i][j]);
                aux += sala[i][j];
            }
            medias[i] = aux/notas;
            medias[i] > 5 ? printf("Media do aluno %i = %.2f : Aprovado\n", i+1, medias[i]) : printf("Media do aluno %i = %.2f : Reprovado\n", i+1, medias[i]);
        }
        sort(medias, alunos);
        printf("\n");
        for (int i = 0; i < notas; i++)
        {
            printf("%.2f ", medias[i]);
        }
    }

    void sort(float *unsorted, int size)
    {
        float aux = 0, passou = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                if (unsorted[j] >= unsorted[i])
                {
                    aux = unsorted[i];
                    unsorted[i] = unsorted[j];
                    unsorted[j] = aux;
                    passou++;
                }
            }
            if (passou == 0)
                break;
        }
    }