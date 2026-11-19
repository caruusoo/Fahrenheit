#include <stdio.h>

int main() {
    int n, i;
    double x, termo, soma = 0;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    termo = x;
    for (i = 0; i < n; i++) {
        soma += termo;
        termo = -termo * x * x / ((2 * i + 2) * (2 * i + 3));
    }

    printf("seno(%.4f) = %.10f\n", x, soma);
    return 0;
}
