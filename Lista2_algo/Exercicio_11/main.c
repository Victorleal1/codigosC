#include <stdio.h>

float calcular_media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } else {
        printf("Tipo de média inválido! Use 'A' para aritmética ou 'P' para ponderada.\n");
        return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo_media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o tipo de média (A para aritmética, P para ponderada): ");
    scanf(" %c", &tipo_media);

    float media = calcular_media(nota1, nota2, nota3, tipo_media);

    if (media >= 0) {
        printf("Média calculada: %.2f\n", media);
    }

    return 0;
}
