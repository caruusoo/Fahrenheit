#include <stdio.h>

int main() {
    int n, i;
    double pi_gl = 0, pi_nk = 3, sinal;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    sinal = 1;
    for (i = 0; i < n; i++) {
        pi_gl += sinal * 4.0 / (2 * i + 1);
        sinal = -sinal;
    }

    sinal = 1;
    for (i = 1; i < n; i++) {
        pi_nk += sinal * 4.0 / ((2.0 * i) * (2 * i + 1) * (2 * i + 2));
        sinal = -sinal;
    }

    printf("a) Gregory-Leibniz: %.10f\n", pi_gl);
    printf("b) Nilakantha:      %.10f\n", pi_nk);
    return 0;
}
