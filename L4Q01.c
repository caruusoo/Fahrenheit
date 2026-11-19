#include <stdio.h>

int main() {
    int k, i;
    double soma = 0;

    printf("Digite o numero de termos: ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++) {
        if (i == 1)
            printf("1");
        else
            printf(" + 1/%d", i);
        soma += 1.0 / i;
    }

    printf("\nSomatorio: %f\n", soma);
    return 0;
}
