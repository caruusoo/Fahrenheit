#include <stdio.h>

int main() {
    int n, i;
    double x, termo = 1, soma = 0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i > 0)
            termo = termo * x / i;
        soma += termo;
    }

    printf("e^%.4f = %.10f\n", x, soma);
    return 0;
}
