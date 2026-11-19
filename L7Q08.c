#include <stdio.h>

double harmonica_iterativa(int n) {
    int i;
    double s = 0;
    for (i = 1; i <= n; i++)
        s += 1.0 / i;
    return s;
}

double harmonica_recursiva(int n) {
    if (n <= 0)
        return 0;
    return 1.0 / n + harmonica_recursiva(n - 1);
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Iterativa: S = %f\n", harmonica_iterativa(n));
    printf("Recursiva: S = %f\n", harmonica_recursiva(n));
    return 0;
}
