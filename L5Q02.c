#include <stdio.h>
#define TAM 30

int main() {
    int v[TAM], i;

    for (i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] == 0)
            v[i] = 1;
    }

    printf("Vetor: ");
    for (i = 0; i < TAM; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
