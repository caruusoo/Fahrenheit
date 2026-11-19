#include <stdio.h>
#define L 5
#define C 3

int main() {
    int a[L][C], i, j, pares = 0, impares = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 == 0)
                pares++;
            else
                impares++;
        }
    }

    printf("Pares: %d (%.2f%%)\n", pares, (float) pares / (L * C) * 100);
    printf("Impares: %d (%.2f%%)\n", impares, (float) impares / (L * C) * 100);
    return 0;
}
