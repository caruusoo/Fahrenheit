#include <stdio.h>

int main() {
    int n, i;
    double e = 0, fat = 1;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i > 0)
            fat = fat * i;
        e += 1.0 / fat;
    }

    printf("e = %.10f\n", e);
    return 0;
}
