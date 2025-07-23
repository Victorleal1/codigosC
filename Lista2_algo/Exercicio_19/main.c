#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("N�mero inv�lido.\n");
        return 1;
    }

    printf("%d! = %d\n", n, fatorial(n));

    return 0;
}
