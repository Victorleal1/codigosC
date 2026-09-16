#include <stdio.h>
#include "ponto.h"

int main() {

    Ponto *p1;
    Ponto *p2;

    float x1, y1;
    float x2, y2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto:\n");

    printf("x: ");
    scanf("%f", &x1);

    printf("y: ");
    scanf("%f", &y1);


    printf("\nDigite as coordenadas do segundo ponto:\n");

    printf("x: ");
    scanf("%f", &x2);

    printf("y: ");
    scanf("%f", &y2);


    p1 = Cria_pto(x1, y1);
    p2 = Cria_pto(x2, y2);


    if (p1 == NULL || p2 == NULL) {

        printf("Erro ao criar os pontos.\n");

        Libera_pto(&p1);
        Libera_pto(&p2);

        return 1;
    }


    distancia = Distancia_pto(p1, p2);


    printf("\nDistancia entre os pontos: %.2f\n", distancia);

    Libera_pto(&p1);
    Libera_pto(&p2);


    return 0;
}