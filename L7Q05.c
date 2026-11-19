#include <stdio.h>

int fibo(int n) {
    int a = 1, b = 1, prox, i;

    if (n <= 2)
        return 1;
    for (i = 3; i <= n; i++) {
        prox = a + b;
        a = b;
        b = prox;
    }
    return b;
}

int main() {
    int n, i;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", fibo(i));
        if (i < n)
            printf(", ");
    }
    printf("\n");
    return 0;
}
