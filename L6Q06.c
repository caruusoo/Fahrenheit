#include <stdio.h>
#define N 5

int main() {
    int m[N][N], sl[N] = {0}, sc[N] = {0}, i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            sl[i] += m[i][j];
            sc[j] += m[i][j];
        }
    }

    printf("\nMatriz M:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    printf("SL: ");
    for (i = 0; i < N; i++)
        printf("%d ", sl[i]);
    printf("\nSC: ");
    for (i = 0; i < N; i++)
        printf("%d ", sc[i]);
    printf("\n");
    return 0;
}
