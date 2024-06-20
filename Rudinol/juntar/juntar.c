#include <stdio.h>
#include <string.h>

int main() {
    char A[131], B[131], parametro[21];
    char *posA, *posB;

    fgets(A, 131, stdin);
    fgets(B, 131, stdin);
    fgets(parametro, 21, stdin);

    A[strcspn(A, "\n")] = 0;
    B[strcspn(B, "\n")] = 0;
    parametro[strcspn(parametro, "\n")] = 0;

    posA = strstr(A, parametro);
    posB = strstr(B, parametro);

    int espaco_anterior = 0;

    if (posA != NULL) {
        for (char *p = A; p < posA; p++) {
            if (*p != ' ' || (p > A && *(p - 1) != ' ')) {
                putchar(*p);
            }
        }
    } else {
        for (char *p = A; *p != '\0'; p++) {
            if (*p != ' ' || (p > A && *(p - 1) != ' ')) {
                putchar(*p);
            }
        }
    }

    if (posB != NULL) {
        posB += strlen(parametro);
        while (*posB == ' ') {
            posB++;
        }

        if (*(posB - strlen(parametro) - 1) == ' ') {
            putchar(' ');
        }

        espaco_anterior = 1;
        for (char *p = posB; *p != '\0'; p++) {
            if (*p != ' ' || (espaco_anterior == 0)) {
                putchar(*p);
                espaco_anterior = (*p == ' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
