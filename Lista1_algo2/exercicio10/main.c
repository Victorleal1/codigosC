#include <stdio.h>

int main() {
    int M[5][5];
    int SL[5] = {0};
    int SC[5] = {0};
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);

            SL[i] += M[i][j];
            SC[j] += M[i][j];
        }
    }

    printf("\nMatriz M[5][5]:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor SL (Soma das linhas):\n");
    for (i = 0; i < 5; i++) {
        printf("SL[%d] = %d\n", i, SL[i]);
    }

    printf("\nVetor SC (Soma das colunas):\n");
    for (j = 0; j < 5; j++) {
        printf("SC[%d] = %d\n", j, SC[j]);
    }

    return 0;
}
