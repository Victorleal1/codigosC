#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto infEsq;
    Ponto supDir;
} Ret;

int main() {
    Ponto v[4];
    Ret r;
    float largura, altura, area;

    printf("Digite as coordenadas dos 4 vertices do retangulo (x y):\n");
    for (int i = 0; i < 4; i++) {
        printf("Vertice %d: ", i + 1);
        scanf("%f %f", &v[i].x, &v[i].y);
    }

    r.infEsq.x = v[0].x;
    r.infEsq.y = v[0].y;
    r.supDir.x = v[0].x;
    r.supDir.y = v[0].y;

    for (int i = 1; i < 4; i++) {
        if (v[i].x < r.infEsq.x) r.infEsq.x = v[i].x;
        if (v[i].y < r.infEsq.y) r.infEsq.y = v[i].y;
        if (v[i].x > r.supDir.x) r.supDir.x = v[i].x;
        if (v[i].y > r.supDir.y) r.supDir.y = v[i].y;
    }

    largura = fabs(r.supDir.x - r.infEsq.x);
    altura = fabs(r.supDir.y - r.infEsq.y);
    area = largura * altura;

    printf("\nArea do retangulo: %.2f\n", area);

    return 0;
}
