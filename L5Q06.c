#include <stdio.h>
#define TAM 30

int main() {
    float v[TAM], soma = 0, media, soma_acima = 0;
    int i, qtd_acima = 0;

    for (i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / TAM;
    printf("\nMedia de todos os valores: %.2f\n", media);

    printf("Valores acima da media:\n");
    for (i = 0; i < TAM; i++) {
        if (v[i] > media) {
            printf("  v[%d] = %.2f\n", i, v[i]);
            qtd_acima++;
            soma_acima += v[i];
        }
    }

    printf("Quantidade acima da media: %d\n", qtd_acima);
    printf("Soma dos valores acima da media: %.2f\n", soma_acima);
    printf("Porcentagem acima da media: %.2f%%\n", (float) qtd_acima / TAM * 100);
    return 0;
}
