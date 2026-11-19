#include <stdio.h>
#define TAM 20

int main() {
    int v[TAM], i;

    for (i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Valores positivos: ");
    for (i = 0; i < TAM; i++) {
        if (v[i] > 0)
            printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
