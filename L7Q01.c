#include <stdio.h>

int tipo_triangulo(float x, float y, float z) {
    if (x + y <= z || x + z <= y || y + z <= x)
        return 0;
    if (x == y && y == z)
        return 1;
    if (x == y || x == z || y == z)
        return 2;
    return 3;
}

int main() {
    float a, b, c;
    int tipo;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    tipo = tipo_triangulo(a, b, c);

    printf("Codigo %d: ", tipo);
    if (tipo == 0)
        printf("os lados nao formam um triangulo\n");
    else if (tipo == 1)
        printf("triangulo equilatero\n");
    else if (tipo == 2)
        printf("triangulo isosceles\n");
    else
        printf("triangulo escaleno\n");
    return 0;
}
