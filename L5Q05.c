#include <stdio.h>
#define TAM 30

int main() {
    int v[TAM], i, soma = 0, qtd = 0;

    for (i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] % 2 != 0 && v[i] > 10) {
            soma += v[i];
            qtd++;
        }
    }

    if (qtd > 0)
        printf("Media dos impares maiores que 10: %.2f\n", (float) soma / qtd);
    else
        printf("Nao ha valores impares maiores que 10.\n");
    return 0;
}
