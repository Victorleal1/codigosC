#include <stdio.h>

int potencia(int x, int z) {
    int resultado = 1;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base (x): ");
    scanf("%d", &base);

    printf("Digite o expoente (z): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente deve ser inteiro não negativo.\n");
        return 1;
    }

    int resultado = potencia(base, expoente);

    printf("%d elevado a %d = %d\n", base, expoente, resultado);

    return 0;
}
