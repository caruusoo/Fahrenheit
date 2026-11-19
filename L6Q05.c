#include <stdio.h>
#define L 3
#define C 2

int main() {
    int a[L][C], b[L][C], c[L][C], i, j;

    printf("Matriz A:\n");
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Matriz B:\n");
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            if (i <= j)
                c[i][j] = a[i][j];
            else
                c[i][j] = b[i][j];
        }

    printf("\nMatriz C:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", c[i][j]);
        printf("\n");
    }
    return 0;
}
