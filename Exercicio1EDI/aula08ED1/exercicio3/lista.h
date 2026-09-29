typedef struct lista * Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, char nome[], int volume, float preco);
int remove_fim(Lista lst);
int obtem_valor_elem(Lista lst, int pos, char nome[], int *volume, float *preco);
void libera_lista(Lista *lst);
