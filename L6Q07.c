#include <stdio.h>
#define L 4
#define C 6

int main() {
    int n1[L][C], n2[L][C], m1[L][C], m2[L][C], i, j;

    printf("Matriz N1:\n");
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            printf("N1[%d][%d]: ", i, j);
            scanf("%d", &n1[i][j]);
        }

    printf("Matriz N2:\n");
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            printf("N2[%d][%d]: ", i, j);
            scanf("%d", &n2[i][j]);
        }

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            m1[i][j] = n1[i][j] + n2[i][j];
            m2[i][j] = n1[i][j] - n2[i][j];
        }

    printf("\nN1:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", n1[i][j]);
        printf("\n");
    }

    printf("\nN2:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", n2[i][j]);
        printf("\n");
    }

    printf("\nM1 = N1 + N2:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", m1[i][j]);
        printf("\n");
    }

    printf("\nM2 = N1 - N2:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", m2[i][j]);
        printf("\n");
    }
    return 0;
}
