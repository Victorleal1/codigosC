#include <stdio.h>

int quadrado_perfeito(int n) {
    if (n < 0) return 0;

    for (int i = 0; i * i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (quadrado_perfeito(numero))
        printf("%d é um quadrado perfeito.\\n", numero);
    else
        printf("%d não é um quadrado perfeito.\\n", numero);

    return 0;
}
