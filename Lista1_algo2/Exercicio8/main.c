#include <stdio.h>

int main() {
    int valores[5];
    int i, maior, menor, soma = 0;
    float media;

    for (i = 0; i < 5; i++) {
        printf("Entre com o número %d: ", i + 1);
        scanf("%d", &valores[i]);

        soma += valores[i];

        if (i == 0) {
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }
    }

    media = (float)soma / 5;

    printf("Os números digitados são: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nO maior valor é: %d", maior);
    printf("\nO menor valor é: %d", menor);
    printf("\nA média é: %.1f\n", media);

    return 0;
}
