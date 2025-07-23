#include <stdio.h>

void triangulo_lateral(int n) {
    int altura = 2 * n - 1;
    for (int i = 1; i <= altura; i++) {
        int estrelas = (i <= n) ? i : (2 * n - i);
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

    triangulo_lateral(n);

    return 0;
}
