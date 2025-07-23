#include <stdio.h>

float volume_esfera(float raio) {
    float pi = 3.141592;
    return (4.0 / 3.0) * pi * raio * raio * raio;
}

int main() {
    float r;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    if (r < 0)
        printf("Raio inválido. Deve ser não negativo.\\n");
    else
        printf("Volume da esfera de raio %.2f = %.4f\\n", r, volume_esfera(r));

    return 0;
}
