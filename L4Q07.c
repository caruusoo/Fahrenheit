#include <stdio.h>

int main() {
    int n, i;
    double x, termo, soma = 0;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    termo = 1;
    for (i = 0; i < n; i++) {
        soma += termo;
        termo = -termo * x * x / ((2 * i + 1) * (2 * i + 2));
    }

    printf("cos(%.4f) = %.10f\n", x, soma);
    return 0;
}
