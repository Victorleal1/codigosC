#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int numero, qtd = 0, i;
    int continuar = 1;

    while (continuar) {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0)
            continuar = 0;
        else {
            vetor = (int*) realloc(vetor, (qtd + 1) * sizeof(int));
            if (vetor == NULL) {
                printf("Erro de memoria!\n");
                return 1;
            }
            vetor[qtd] = numero;
            qtd++;
        }
    }

    printf("\nNumeros digitados:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;
}
