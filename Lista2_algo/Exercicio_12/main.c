#include <stdio.h>

int soma_algarismos(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int numero;

    printf("Digite um n�mero inteiro maior que zero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("N�mero inv�lido\n");
        return 1;
    }

    int resultado = soma_algarismos(numero);

    printf("Soma dos algarismos: %d\n", resultado);

    return 0;
}
