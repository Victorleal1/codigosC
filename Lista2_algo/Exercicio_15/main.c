#include <stdio.h>

int forma_triangulo(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b)
        return 1;
    else
        return 0;
}

void tipo_triangulo(float a, float b, float c) {
    if (a == b && b == c)
        printf("Triângulo Equilátero\n");
    else if (a == b || b == c || a == c)
        printf("Triângulo Isósceles\n");
    else
        printf("Triângulo Escaleno\n");
}

int main() {
    float a, b, c;

    printf("Digite o lado a: ");
    scanf("%f", &a);
    printf("Digite o lado b: ");
    scanf("%f", &b);
    printf("Digite o lado c: ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Lados devem ser maiores que zero.\n");
        return 1;
    }

    if (forma_triangulo(a, b, c)) {
        tipo_triangulo(a, b, c);
    } else {
        printf("Não forma um triângulo.\n");
    }

    return 0;
}
