#include <stdio.h>

int main() {
    int matriz[4][5];
    int i, j;
    int menor, linhaMenor, colunaMenor;

    printf("Digite os valores da matriz 4x5:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            } else {
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                    linhaMenor = i;
                    colunaMenor = j;
                }
            }
        }
    }

    printf("\nMenor valor: %d\n", menor);
    printf("Posição: linha %d, coluna %d\n", linhaMenor, colunaMenor);

    return 0;
}
