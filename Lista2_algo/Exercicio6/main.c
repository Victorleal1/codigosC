#include <stdio.h>

int converter_para_segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int horas, minutos, segundos;

    printf("Digite horas: ");
    scanf("%d", &horas);

    printf("Digite minutos: ");
    scanf("%d", &minutos);

    printf("Digite segundos: ");
    scanf("%d", &segundos);

    int total = converter_para_segundos(horas, minutos, segundos);

    printf("Total em segundos: %d\\n", total);

    return 0;
}
