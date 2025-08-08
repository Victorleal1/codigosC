#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int i;

    array = (int *) malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        return 1;
    }

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nOs numeros digitados foram:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    array = NULL;

    return 0;
}
