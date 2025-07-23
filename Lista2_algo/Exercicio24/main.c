#include <stdio.h>

void triangulo(int n) {
    int base = 2 * n - 1;

    for (int i = 1; i <= n; i++) {
        int estrelas = 2 * i - 1;
        int espacos = (base - estrelas) / 2;

        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < estrelas; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido.\n");
        return 1;
    }

    triangulo(n);

    return 0;
}
