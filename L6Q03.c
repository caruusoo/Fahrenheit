#include <stdio.h>
#define N 5

int main() {
    int m[N][N], i, j;
    int s_linha4 = 0, s_coluna2 = 0, s_diag_p = 0, s_diag_s = 0, s_total = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        s_linha4 += m[3][i];
        s_coluna2 += m[i][1];
        s_diag_p += m[i][i];
        s_diag_s += m[i][N - 1 - i];
        for (j = 0; j < N; j++)
            s_total += m[i][j];
    }

    printf("a) Soma da linha 4: %d\n", s_linha4);
    printf("b) Soma da coluna 2: %d\n", s_coluna2);
    printf("c) Soma da diagonal principal: %d\n", s_diag_p);
    printf("d) Soma da diagonal secundaria: %d\n", s_diag_s);
    printf("e) Soma de todos os elementos: %d\n", s_total);
    return 0;
}
