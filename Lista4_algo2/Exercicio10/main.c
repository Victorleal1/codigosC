#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double *vetor;

    printf("Digite a quantidade de valores (>= 10): ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    vetor = (double*) malloc(n * sizeof(double));
    if (vetor == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        vetor[i] = (rand() % 101);
    }

    printf("\nValores nos 10 primeiros elementos:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", vetor[i]);
    }

    free(vetor);
    vetor = NULL;

    return 0;
}
