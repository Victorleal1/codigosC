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

    lst = cria_lista();

    if (lst == NULL) {
        printf("Falha ao criar a lista.\n");
        return 0;
    }

    printf("Lista inicial: ");
    imprime_lista(lst);

    insere_ord(lst, 4);
    insere_ord(lst, 8);
    insere_ord(lst, -1);
    insere_ord(lst, 19);
    insere_ord(lst, 2);
    insere_ord(lst, 7);
    insere_ord(lst, 8);
    insere_ord(lst, 5);
    insere_ord(lst, 9);
    insere_ord(lst, 22);
    insere_ord(lst, 45);

    printf("Apos as insercoes: ");
    imprime_lista(lst);

    remove_ord(lst, 8);

    printf("Apos remover 8: ");
    imprime_lista(lst);

    libera_lista(&lst);

    return 0;
}
