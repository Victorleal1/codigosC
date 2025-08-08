#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, posicao, valor, opcao, qtd_ints, i;
    int *memoria;

    printf("Digite o tamanho da memoria em bytes (multiplo de %zu): ", sizeof(int));
    scanf("%d", &tamanho);

    if (tamanho % sizeof(int) != 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }

    qtd_ints = tamanho / sizeof(int);
    memoria = (int*) calloc(qtd_ints, sizeof(int));
    if (memoria == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    do {
        printf("\n1 - Inserir valor\n2 - Consultar valor\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Posicao (0 a %d): ", qtd_ints - 1);
            scanf("%d", &posicao);
            if (posicao < 0 || posicao >= qtd_ints) {
                printf("Posicao invalida!\n");
                continue;
            }
            printf("Valor: ");
            scanf("%d", &valor);
            memoria[posicao] = valor;
        } else if (opcao == 2) {
            printf("Posicao (0 a %d): ", qtd_ints - 1);
            scanf("%d", &posicao);
            if (posicao < 0 || posicao >= qtd_ints) {
                printf("Posicao invalida!\n");
                continue;
            }
            printf("Valor armazenado: %d\n", memoria[posicao]);
        }
    } while (opcao != 0);

    free(memoria);
    memoria = NULL;

    return 0;
}
