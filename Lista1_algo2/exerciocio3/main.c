#include <stdio.h>

int main() {
    char estado_civil;

    printf("Digite a primeira letra do seu estado civil (c - casado, s - solteiro, v - viuvo, d - divorciado): ");
    scanf(" %c", &estado_civil); // O espa�o antes de %c ignora caracteres como \n

    switch (estado_civil) {
        case 'c':
        case 'C':
            printf("Indica��o: Caramel Sweet & Salt\n");
            break;
        case 's':
        case 'S':
            printf("Indica��o: London Pub\n");
            break;
        case 'v':
        case 'V':
            printf("Indica��o: XI Baile da Melhor Idade\n");
            break;
        case 'd':
        case 'D':
            printf("Indica��o: Academia Smart Fit\n");
            break;
        default:
            printf("Estado civil inv�lido. Use apenas c, s, v ou d.\n");
            break;
    }

    return 0;
}
