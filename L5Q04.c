#include <stdio.h>
#define TAM 10

int main() {
    int a[TAM], b[TAM], c[TAM], i;

    printf("Vetor A:\n");
    for (i = 0; i < TAM; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Vetor B:\n");
    for (i = 0; i < TAM; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < TAM; i++)
        c[i] = a[i] * b[i];

    printf("Vetor resultante: ");
    for (i = 0; i < TAM; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
