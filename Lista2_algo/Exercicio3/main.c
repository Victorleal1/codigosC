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

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);

    int resultado = verificar_sinal(n);

    if (resultado == 1)
        printf("O n�mero � positivo.\\n");
    else if (resultado == -1)
        printf("O n�mero � negativo.\\n");
    else
        printf("O n�mero � zero.\\n");

    return 0;
}
