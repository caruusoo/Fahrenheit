#include <stdio.h>
#define N 30

int main() {
    int v[N], i, aux;

    for (i = 0; i < N; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < N / 2; i++) {
        aux = v[i];
        v[i] = v[N - 1 - i];
        v[N - 1 - i] = aux;
    }

    printf("Vetor invertido: ");
    for (i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
