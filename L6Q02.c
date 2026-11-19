#include <stdio.h>
#define L 7
#define C 4

int main() {
    int m[L][C], i, j, menor, lin = 0, col = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    menor = m[0][0];
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];
                lin = i;
                col = j;
            }
        }
    }

    printf("Menor valor: %d na posicao [%d][%d]\n", menor, lin, col);
    return 0;
}
