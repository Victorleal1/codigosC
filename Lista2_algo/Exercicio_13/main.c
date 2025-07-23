#include <stdio.h>

float calcular(float num1, float num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Erro: divis�o por zero!\n");
                return 0; o
            }
            return num1 / num2;
        default:
            printf("Opera��o inv�lida!\n");
            return 0;
    }
}

int main() {
    float a, b, resultado;
    char op;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &a);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &b);

    printf("Digite a opera��o (+, -, *, /): ");
    scanf(" %c", &op);

    resultado = calcular(a, b, op);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
