#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Endereco de numeros[%d]: %p\n", i, (void*)&numeros[i]);
    }

    return 0;
}
