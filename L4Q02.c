#include <stdio.h>

int main() {
    int k, n;
    double soma = 0, sinal = 1;

    printf("Digite o numero de termos: ");
    scanf("%d", &k);

    for (n = 1; n <= k; n++) {
        if (n == 1)
            printf("1");
        else if (sinal > 0)
            printf(" + 1/%d", n);
        else
            printf(" - 1/%d", n);

        soma += sinal / n;
        sinal = -sinal;
    }

    printf("\nSomatorio: %f\n", soma);
    printf("ln(2) = 0.693147\n");
    return 0;
}
