#include <stdio.h>

int main() {
    int n, i, j;
    int contador = 0;
    int numero = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de j: ");
    scanf("%d", &j);

    for (numero = 0; contador < n; numero++) {
        if (numero % i == 0 || numero % j == 0) {
            printf("%d", numero);
            contador++;
            if (contador < n) {
                printf(",");
            }
        }
    }

    printf("\n");
    return 0;
}
