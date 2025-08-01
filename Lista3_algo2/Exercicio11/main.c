#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nEnderecos dos valores pares:\n");
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            printf("numeros[%d] = %d  Endereco: %p\n", i, numeros[i], (void*)&numeros[i]);
        }
    }

    return 0;
}
