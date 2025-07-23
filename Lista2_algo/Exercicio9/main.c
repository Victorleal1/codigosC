#include <stdio.h>

float volume_cilindro(float raio, float altura) {
    const float pi = 3.141592;
    return pi * raio * raio * altura;
}

int main() {
    float raio, altura;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    if (raio < 0 || altura < 0) {
        printf("Raio e altura devem ser valores não negativos.\\n");
        return 1;
    }

    float volume = volume_cilindro(raio, altura);

    printf("Volume do cilindro: %.4f\\n", volume);

    return 0;
}
