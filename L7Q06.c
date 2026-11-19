#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int num = x, soma = 0, cont = 0;

    while (num % k != 0)
        num++;

    while (cont < n) {
        soma += num;
        num += k;
        cont++;
    }
    return soma;
}

int main() {
    int n, k, x;

    printf("Digite n (quantidade de termos): ");
    scanf("%d", &n);
    do {
        printf("Digite k (diferente de 0): ");
        scanf("%d", &k);
    } while (k == 0);
    printf("Digite x (valor inicial): ");
    scanf("%d", &x);

    printf("Soma: %d\n", soma_especial(n, k, x));
    return 0;
}
