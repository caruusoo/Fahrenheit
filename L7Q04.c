#include <stdio.h>

int eh_primo(int num) {
    int i;

    if (num < 2)
        return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int k, n, num, achados = 0;

    printf("Digite k: ");
    scanf("%d", &k);
    printf("Digite n: ");
    scanf("%d", &n);

    printf("Os %d primeiros primos acima de %d: ", n, k);
    num = k + 1;
    while (achados < n) {
        if (eh_primo(num)) {
            printf("%d ", num);
            achados++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
