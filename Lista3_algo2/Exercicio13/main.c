#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

void calc_esfera(float R, float *area, float *volume);

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume) {
    float R2 = R * R;        // R ao quadrado
    float R3 = R * R * R;    // R ao cubo

    *area = 4 * PI * R2;                      // Área da superfície
    *volume = (4.0 / 3.0) * PI * R3;          // Volume da esfera
}
