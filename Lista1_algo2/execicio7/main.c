#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp;

    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posi��o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("\nOs 3 menores valores s�o: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}
