#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return celsius * (9.0 / 5.0) + 32.0;
}

int main() {
    float c;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    float f = celsius_para_fahrenheit(c);

    printf("Temperatura em Fahrenheit: %.2f°F\\n", f);

    return 0;
}
