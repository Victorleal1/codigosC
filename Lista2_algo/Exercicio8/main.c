#include <stdio.h>


float raiz_quadrada(float num) {
    float i = 0.0;

    float passo = 0.0001;

    while (i * i <= num) {
        i += passo;
    }

    return i - passo;
}

float calcular_hipotenusa(float a, float b) {
    float soma = a * a + b * b;
    return raiz_quadrada(soma);
}

int main() {
    float a, b;

    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);

    float hipotenusa = calcular_hipotenusa(a, b);

    printf("Hipotenusa = %.2f\\n", hipotenusa);

    return 0;
}
