#include <stdio.h>
#define CAP 50

int main() {
    long long fib[CAP];
    int n, i;

    do {
        printf("Digite N (1 a %d): ", CAP);
        scanf("%d", &n);
        if (n < 1 || n > CAP)
            printf("Valor invalido!\n");
    } while (n < 1 || n > CAP);

    for (i = 0; i < n; i++) {
        if (i < 2)
            fib[i] = 1;
        else
            fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Serie: ");
    for (i = 0; i < n; i++) {
        printf("%lld", fib[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
    return 0;
}
