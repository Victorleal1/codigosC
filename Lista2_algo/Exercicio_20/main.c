#include <stdio.h>

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int contar_primos(int N) {
    int count = 0;
    for (int i = 2; i < N; i++) {
        if (eh_primo(i)) count++;
    }
    return count;
}

int main() {
    int N;

    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido.\n");
        return 1;
    }

    int total = contar_primos(N);
    printf("Quantidade de números primos abaixo de %d: %d\n", N, total);

    return 0;
}
