#include <stdio.h>

float calcular_media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } else {
        printf("Tipo de m�dia inv�lido! Use 'A' para aritm�tica ou 'P' para ponderada.\n");
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

    printf("Digite o tipo de m�dia (A para aritm�tica, P para ponderada): ");
    scanf(" %c", &tipo_media);

    float media = calcular_media(nota1, nota2, nota3, tipo_media);

    if (media >= 0) {
        printf("M�dia calculada: %.2f\n", media);
    }

    return 0;
}
