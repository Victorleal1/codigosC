#include <stdio.h>

int main() {
    char estado_civil;

    printf("Digite a primeira letra do seu estado civil (c - casado, s - solteiro, v - viuvo, d - divorciado): ");
    scanf(" %c", &estado_civil); // O espaço antes de %c ignora caracteres como \n

    switch (estado_civil) {
        case 'c':
        case 'C':
            printf("Indicação: Caramel Sweet & Salt\n");
            break;
        case 's':
        case 'S':
            printf("Indicação: London Pub\n");
            break;
        case 'v':
        case 'V':
            printf("Indicação: XI Baile da Melhor Idade\n");
            break;
        case 'd':
        case 'D':
            printf("Indicação: Academia Smart Fit\n");
            break;
        default:
            printf("Estado civil inválido. Use apenas c, s, v ou d.\n");
            break;
    }

    return 0;
}
