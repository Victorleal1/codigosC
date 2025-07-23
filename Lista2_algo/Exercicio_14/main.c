#include <stdio.h>

void consumo_carro(float km, float litros) {
    float consumo = km / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");
}

int main() {
    float distancia, litros;

    printf("Digite a distância em Km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo_carro(distancia, litros);

    return 0;
}
