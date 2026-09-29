#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista.h"

#define max 20

struct bebida {
    char nome[20];
    int volume;
    float preco;
};

struct lista {
    struct bebida no[max];
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

int insere_elem(Lista lst, char nome[], int volume, float preco) {
    if (lst == NULL || lista_cheia(lst) == 1)
        return 0; 

    strcpy(lst->no[lst->Fim].nome, nome);
    lst->no[lst->Fim].volume = volume;
    lst->no[lst->Fim].preco = preco;

    lst->Fim++; 

    return 1; 
}

int remove_fim(Lista lst) {
    if (lst == NULL || lista_vazia(lst) == 1)
        return 0; 

    lst->Fim--; 

    return 1; 
}

int obtem_valor_elem(Lista lst, int pos, char nome[], int *volume, float *preco) {
    if (lst == NULL || nome == NULL || volume == NULL || preco == NULL ||
        pos < 0 || pos >= lst->Fim)
        return 0; 

    strcpy(nome, lst->no[pos].nome);
    *volume = lst->no[pos].volume;
    *preco = lst->no[pos].preco;

    return 1; 
}

void libera_lista(Lista *lst) {
    free(*lst);   
    *lst = NULL;  
}
