#include<stdio.h>
#include "lista.h"

void imprime_tabela(Lista lst) {
    int i = 0, volume;
    float preco;
    char nome[20];

    printf("\n%-20s %-12s %-10s\n", "Nome", "Volume(ml)", "Preco");
    printf("------------------------------------------------\n");

    while (obtem_valor_elem(lst, i, nome, &volume, &preco) == 1) {
        printf("%-20s %-12d %.2f\n", nome, volume, preco);
        i++;
    }
}

int main() {
    Lista lst;
    int opcao, volume;
    float preco;
    char nome[20];

    lst = cria_lista();

    if (lst == NULL) {
        printf("Falha ao criar a lista.\n");
        return 0;
    }

    do {
        printf("\n[1] Inserir registro\n");
        printf("[2] Apagar ultimo registro\n");
        printf("[3] Imprimir tabela\n");
        printf("[4] Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf(" %19[^\n]", nome);

                printf("Volume (ml): ");
                scanf("%d", &volume);

                printf("Preco: ");
                scanf("%f", &preco);

                if (insere_elem(lst, nome, volume, preco) == 1)
                    printf("Registro inserido com sucesso.\n");
                else
                    printf("Falha ao inserir registro.\n");

                break;

            case 2:
                if (remove_fim(lst) == 1)
                    printf("Ultimo registro removido com sucesso.\n");
                else
                    printf("Falha ao remover registro.\n");

                break;

            case 3:
                imprime_tabela(lst);
                break;

            case 4:
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 4);

    libera_lista(&lst);

    return 0;
}
