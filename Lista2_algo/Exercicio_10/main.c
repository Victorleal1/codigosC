#include <stdio.h>

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    int resultado = maior(num1, num2);

    printf("O maior n�mero �: %d\n", resultado);

    return 0;
}
