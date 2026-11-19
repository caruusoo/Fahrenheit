#include <stdio.h>

int main() {
    int a[3][4], b[4][3], c[3][3], i, j, k;

    printf("Matriz A (3x4):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Matriz B (4x3):\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 4; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\nMatriz C = A x B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%6d", c[i][j]);
        printf("\n");
    }
    return 0;
}
