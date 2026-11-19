#include <stdio.h>
#define TAM 20

int main() {
    int v[TAM], i, pares = 0;

    for (i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0)
            pares++;
    }

    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}
