#include <stdio.h>

void desenha_linha(int n) {
    for (int i = 0; i < n; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int tamanho;

    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho);

    desenha_linha(tamanho);

    return 0;
}
