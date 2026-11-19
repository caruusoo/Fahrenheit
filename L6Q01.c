#include <stdio.h>
#define L 5
#define C 6

int main() {
    int m[L][C], i, j, soma = 0, qtd = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if (m[i][j] % 2 == 0) {
                soma += m[i][j];
                qtd++;
            }
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    if (qtd > 0)
        printf("Media dos valores pares: %.2f\n", (float) soma / qtd);
    else
        printf("Nao ha valores pares na matriz.\n");
    return 0;
}
