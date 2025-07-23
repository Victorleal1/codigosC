#include <stdio.h>

int verificar_sinal(int numero) {
    if (numero > 0)
        return 1;
    else if (numero < 0)
        return -1;
    else
        return 0;
}

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int resultado = verificar_sinal(n);

    if (resultado == 1)
        printf("O número é positivo.\\n");
    else if (resultado == -1)
        printf("O número é negativo.\\n");
    else
        printf("O número é zero.\\n");

    return 0;
}
