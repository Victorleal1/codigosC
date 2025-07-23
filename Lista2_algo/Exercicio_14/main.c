#include <stdio.h>

void consumo_carro(float km, float litros) {
    float consumo = km / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Econ�mico!\n");
    else
        printf("Super econ�mico!\n");
}

int main() {
    float distancia, litros;

    printf("Digite a dist�ncia em Km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo_carro(distancia, litros);

    return 0;
}
