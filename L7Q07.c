#include <stdio.h>

int soma_iterativa(int n) {
    int i, s = 0;
    for (i = 1; i <= n; i++)
        s += i;
    return s;
}

int soma_recursiva(int n) {
    if (n <= 0)
        return 0;
    return n + soma_recursiva(n - 1);
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Iterativa: S = %d\n", soma_iterativa(n));
    printf("Recursiva: S = %d\n", soma_recursiva(n));
    return 0;
}
