#include <stdio.h>

int main() {
    int valores[5];
    int i, maior, menor, soma = 0;
    float media;

    for (i = 0; i < 5; i++) {
        printf("Entre com o n�mero %d: ", i + 1);
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

    printf("Os n�meros digitados s�o: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nO maior valor �: %d", maior);
    printf("\nO menor valor �: %d", menor);
    printf("\nA m�dia �: %.1f\n", media);

    return 0;
}
