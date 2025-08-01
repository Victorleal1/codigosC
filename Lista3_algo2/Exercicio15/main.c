#include <stdio.h>
#include <stdlib.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main() {
    float A, B, C, X1, X2;
    int qtd_raizes;

    printf("Digite os coeficientes A, B e C:\n");
    scanf("%f %f %f", &A, &B, &C);

    qtd_raizes = raizes(A, B, C, &X1, &X2);

    if (qtd_raizes == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (qtd_raizes == 1) {
        printf("Existe uma raiz real: %.2f\n", X1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", X1, X2);
    }

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) {
        return 0;
    }

    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        float raiz_delta = 1;
        float x;
        for (x = 0.0f; x * x <= delta; x += 0.00001f);
        raiz_delta = x;

        *X1 = (-B + raiz_delta) / (2 * A);
        *X2 = (-B - raiz_delta) / (2 * A);
        return 2;
    }
}
