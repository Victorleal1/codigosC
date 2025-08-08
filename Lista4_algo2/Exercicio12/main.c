#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int n, i, idxMaiorPreco = 0, idxMaiorQtd = 0;
    Produto *produtos;

    printf("Digite o numero de produtos: ");
    scanf("%d", &n);

    produtos = (Produto*) malloc(n * sizeof(Produto));
    if (produtos == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %49[^\n]", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }

    for (i = 1; i < n; i++) {
        if (produtos[i].preco > produtos[idxMaiorPreco].preco)
            idxMaiorPreco = i;
        if (produtos[i].quantidade > produtos[idxMaiorQtd].quantidade)
            idxMaiorQtd = i;
    }

    printf("\nProduto com maior preco:\n");
    printf("Codigo: %d | Nome: %s | Quantidade: %d | Preco: %.2f\n",
           produtos[idxMaiorPreco].codigo,
           produtos[idxMaiorPreco].nome,
           produtos[idxMaiorPreco].quantidade,
           produtos[idxMaiorPreco].preco);

    printf("\nProduto com maior quantidade em estoque:\n");
    printf("Codigo: %d | Nome: %s | Quantidade: %d | Preco: %.2f\n",
           produtos[idxMaiorQtd].codigo,
           produtos[idxMaiorQtd].nome,
           produtos[idxMaiorQtd].quantidade,
           produtos[idxMaiorQtd].preco);

    free(produtos);
    produtos = NULL;

    return 0;
}
