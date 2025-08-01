#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float numero, parteFracionaria;
    int parteInteira;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    frac(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.3f\n", parteFracionaria);

    return 0;
}
