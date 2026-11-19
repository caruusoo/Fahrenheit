#include <stdio.h>
#define N 5

int main() {
    int a[N][N], i, j, lin_maior = 0, col_min = 0, maior;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    maior = a[0][0];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (a[i][j] > maior) {
                maior = a[i][j];
                lin_maior = i;
            }

    for (j = 1; j < N; j++)
        if (a[lin_maior][j] < a[lin_maior][col_min])
            col_min = j;

    printf("\nMatriz A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }

    printf("Minimax: %d na posicao [%d][%d]\n",
           a[lin_maior][col_min], lin_maior, col_min);
    return 0;
}
