#include <stdio.h>

void imprime_exclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido.\n");
        return 1;
    }

    imprime_exclamacoes(n);

    return 0;
}
