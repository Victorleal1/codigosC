#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *n1, float *n2);
void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada);

int main() {
    float nota1, nota2, media, mediaP;

    lerNotas(&nota1, &nota2);
    calcularMedias(nota1, nota2, &media, &mediaP);

    printf("\nMedia simples: %.2f\n", media);
    printf("Media ponderada: %.2f\n", mediaP);

    return 0;
}

void lerNotas(float *n1, float *n2) {
    do {
        printf("Digite a primeira nota (0 a 10): ");
        scanf("%f", n1);
    } while (*n1 < 0 || *n1 > 10);

    do {
        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", n2);
    } while (*n2 < 0 || *n2 > 10);
}

void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (n1 + n2) / 2;
    *mediaPonderada = (n1 + 2 * n2) / 3;
}
