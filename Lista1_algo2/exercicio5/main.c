#include <stdio.h>

int main() {
    int n, i, contador = 0, numero = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while (contador < n) {
        printf("%d", numero);
        contador++;
        numero += 2;
        if (contador < n) {
            printf(",");
        }
    }

    printf("\n");
    return 0;
}
