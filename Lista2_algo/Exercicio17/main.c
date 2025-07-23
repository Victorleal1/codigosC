#include <stdio.h>

int soma_entre(int a, int b) {
    int inicio = a < b ? a : b;
    int fim = a > b ? a : b;
    int soma = 0;

    for (int i = inicio + 1; i < fim; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro n�mero positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero positivo: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("N�meros devem ser positivos.\n");
        return 1;
    }

    int resultado = soma_entre(num1, num2);
    printf("Soma dos n�meros entre %d e %d: %d\n", num1, num2, resultado);

    return 0;
}
