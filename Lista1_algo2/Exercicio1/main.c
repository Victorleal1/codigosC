#include <stdio.h>

int main() {
    float altura;

    scanf("%f", &altura);

    printf("O individuo eh: ");
    if (altura <= 1.50f) {
        printf("muito baixo\n");
    } else if (altura <= 1.60f) {
        printf("baixo\n");
    } else if (altura <= 1.80f) {
        printf("mediano\n");
    } else {
        printf("alto\n");
    }

    return 0;
}


