#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

#define max 20

struct lista {
    int no[max];
    int Fim;
};

Lista cria_lista() {
    Lista lst;

    lst = (Lista) malloc(sizeof(struct lista));

    if (lst != NULL)
        lst->Fim = 0; 

    return lst;
}

int lista_vazia(Lista lst) {
    if (lst->Fim == 0)
        return 1; 
    else
        return 0; 
}

int lista_cheia(Lista lst) {
    if (lst->Fim == max)
        return 1; 
    else
        return 0; 
}

int insere_elem(Lista lst, int elem) {
    if (lst == NULL || lista_cheia(lst) == 1)
        return 0; 

    lst->no[lst->Fim] = elem; 
    lst->Fim++;               

    return 1; // Sucesso
}

int remove_elem(Lista lst, int elem) {
    if (lst == NULL || lista_vazia(lst) == 1)
        return 0; 
    int i, Aux = 0;

    
    while (Aux < lst->Fim && lst->no[Aux] != elem)
        Aux++;

    if (Aux == lst->Fim) 
        return 0; 

    
    for (i = Aux + 1; i < lst->Fim; i++)
        lst->no[i - 1] = lst->no[i];

    lst->Fim--; 

    return 1; 
}

int obtem_valor_elem(Lista lst, int pos, int *elem) {
    if (lst == NULL || elem == NULL || pos < 0 || pos >= lst->Fim)
        return 0; 

    *elem = lst->no[pos];

    return 1; 
}

void libera_lista(Lista *lst) {
    free(*lst);   
    *lst = NULL;  
}
