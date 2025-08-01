#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];
    int *p;

    p = numeros;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("\nDobro de cada valor lido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", 2 * (*(p + i)));
    }

    return 0;
}
