#include<stdio.h>
#include "lista.h"

void imprime_lista(Lista lst) {
    int i = 0, elem;

    while (obtem_valor_elem(lst, i, &elem) == 1) {
        printf("%d ", elem);
        i++;
    }

    printf("\n");
}

int main() {
    Lista lst;

    // Inicialize a lista
    lst = cria_lista();

    if (lst == NULL) {
        printf("Falha ao criar a lista.\n");
        return 0;
    }

    // Imprima a lista
    printf("Lista inicial: ");
    imprime_lista(lst);

    // Insira os elementos {4,8,-1,19,2,7,8,5,9,22,45}
    insere_elem(lst, 4);
    insere_elem(lst, 8);
    insere_elem(lst, -1);
    insere_elem(lst, 19);
    insere_elem(lst, 2);
    insere_elem(lst, 7);
    insere_elem(lst, 8);
    insere_elem(lst, 5);
    insere_elem(lst, 9);
    insere_elem(lst, 22);
    insere_elem(lst, 45);

    // Imprima a lista
    printf("Apos as insercoes: ");
    imprime_lista(lst);

    // Remova o elemento 8
    remove_elem(lst, 8);

    // Imprima a lista
    printf("Apos remover 8: ");
    imprime_lista(lst);

    // Inicialize a lista
    libera_lista(&lst);
    lst = cria_lista();

    // Imprima a lista
    printf("Lista reinicializada: ");
    imprime_lista(lst);

    libera_lista(&lst);

    return 0;
}
