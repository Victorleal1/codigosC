#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto *Cria_pto(float x, float y) {

    Ponto *p;

    p = (Ponto *) malloc(sizeof(Ponto));

    if (p != NULL) {
        p->x = x;
        p->y = y;
    }

    return p;
}

void Libera_pto(Ponto **p) {

    free(*p);

    *p = NULL;
}

float Distancia_pto(Ponto *p1, Ponto *p2) {

    float dx;
    float dy;

    if (p1 == NULL || p2 == NULL) {
        return -1;
    }

    dx = p2->x - p1->x;
    dy = p2->y - p1->y;

    return sqrt(dx * dx + dy * dy);
}