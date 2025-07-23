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
                printf("Erro: divisão por zero!\n");
                return 0; o
            }
            return num1 / num2;
        default:
            printf("Operação inválida!\n");
            return 0;
    }
}

int main() {
    float a, b, resultado;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    resultado = calcular(a, b, op);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
