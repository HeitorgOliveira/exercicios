#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int remove_duplicates(int *arr, int n) {
    if (n == 0 || n == 1) return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

int *union_sets(int *a, int na, int *b, int nb, int *size) {
    int *temp = (int *)malloc((na + nb) * sizeof(int));
    int k = 0;
    for (int i = 0; i < na; i++) {
        temp[k++] = a[i];
    }
    for (int i = 0; i < nb; i++) {
        temp[k++] = b[i];
    }
    qsort(temp, k, sizeof(int), compare);
    *size = remove_duplicates(temp, k);
    int *result = (int *)malloc(*size * sizeof(int));
    for (int i = 0; i < *size; i++) {
        result[i] = temp[i];
    }
    free(temp);
    return result;
}

int *union_minus_intersection(int *a, int na, int *b, int nb, int *size) {
    int *union_ab = union_sets(a, na, b, nb, size);
    int *intersection_ab = (int *)malloc((na < nb ? na : nb) * sizeof(int));
    int k = 0;
    for (int i = 0; i < na; i++) {
        for (int j = 0; j < nb; j++) {
            if (a[i] == b[j]) {
                intersection_ab[k++] = a[i];
                break;
            }
        }
    }
    qsort(intersection_ab, k, sizeof(int), compare);
    int inter_size = remove_duplicates(intersection_ab, k);
    
    int *result = (int *)malloc((*size) * sizeof(int));
    int result_size = 0;
    int u = 0, i = 0;
    while (u < *size) {
        if (i < inter_size && union_ab[u] == intersection_ab[i]) {
            u++;
            i++;
        } else {
            result[result_size++] = union_ab[u++];
        }
    }
    result = (int *)realloc(result, result_size * sizeof(int));
    *size = result_size;
    free(union_ab);
    free(intersection_ab);
    return result;
}

int main() {
    int na, nb;
    
    scanf("%d", &na);
    int *a = (int *)malloc(na * sizeof(int));
    for (int i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &nb);
    int *b = (int *)malloc(nb * sizeof(int));
    for (int i = 0; i < nb; i++) {
        scanf("%d", &b[i]);
    }
    
    int union_size;
    int *union_ab = union_sets(a, na, b, nb, &union_size);
    
    int diff_size;
    int *diff = union_minus_intersection(a, na, b, nb, &diff_size);
    
    printf("conjunto A: ");
    if (na == 0) {
        printf("vazio\n");
    } else {
        qsort(a, na, sizeof(int), compare);
        for (int i = 0; i < na; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
    printf("conjunto B: ");
    if (nb == 0) {
        printf("vazio\n");
    } else {
        qsort(b, nb, sizeof(int), compare);
        for (int i = 0; i < nb; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    
    printf("A uniao B: ");
    if (union_size == 0) {
        printf("vazio\n");
    } else {
        for (int i = 0; i < union_size; i++) {
            printf("%d ", union_ab[i]);
        }
        printf("\n");
    }
    
    printf("(A uniao B) - (A interseccao B): ");
    if (diff_size == 0) {
        printf("vazio\n");
    } else {
        for (int i = 0; i < diff_size; i++) {
            printf("%d ", diff[i]);
        }
        printf("\n");
    }
    
    free(a);
    free(b);
    free(union_ab);
    free(diff);
    
    return 0;
}
