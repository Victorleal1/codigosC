#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

Ponto *Cria_pto(float x, float y);


void Libera_pto(Ponto **p);

float Distancia_pto(Ponto *p1, Ponto *p2);

#endif