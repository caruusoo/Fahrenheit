#include <stdio.h>
#define MAX 6

int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int la, ca, lb, cb, i, j, k, valido;

    do {
        printf("Linhas e colunas de A (1 a %d): ", MAX);
        scanf("%d %d", &la, &ca);
        printf("Linhas e colunas de B (1 a %d): ", MAX);
        scanf("%d %d", &lb, &cb);

        valido = 1;
        if (la < 1 || la > MAX || ca < 1 || ca > MAX ||
            lb < 1 || lb > MAX || cb < 1 || cb > MAX) {
            printf("Dimensoes fora do limite! Digite novamente.\n");
            valido = 0;
        } else if (ca != lb) {
            printf("Incompativeis: colunas de A (%d) diferente de linhas de B (%d).\n", ca, lb);
            valido = 0;
        }
    } while (!valido);

    printf("Matriz A (%dx%d):\n", la, ca);
    for (i = 0; i < la; i++)
        for (j = 0; j < ca; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Matriz B (%dx%d):\n", lb, cb);
    for (i = 0; i < lb; i++)
        for (j = 0; j < cb; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < la; i++)
        for (j = 0; j < cb; j++) {
            c[i][j] = 0;
            for (k = 0; k < ca; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\nMatriz C = A x B (%dx%d):\n", la, cb);
    for (i = 0; i < la; i++) {
        for (j = 0; j < cb; j++)
            printf("%6d", c[i][j]);
        printf("\n");
    }
    return 0;
}
