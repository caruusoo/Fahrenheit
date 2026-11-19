#include <stdio.h>

int soma_impares(int x, int y) {
    int menor, maior, i, soma = 0;

    if (x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    for (i = menor + 1; i < maior; i++) {
        if (i % 2 != 0)
            soma += i;
    }
    return soma;
}

int main() {
    int x, y;

    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);

    printf("Soma dos impares entre %d e %d: %d\n", x, y, soma_impares(x, y));
    return 0;
}
