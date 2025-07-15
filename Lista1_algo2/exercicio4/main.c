#include <stdio.h>

int main() {
    int i;

    printf("<< Contagem regressiva >>\n");
    printf("For: ");
    for (i = 10; i >= 0; i--) {
        printf("%d.. ", i);
    }
    printf("FIM!\n");

    printf("While: ");
    i = 10;
    while (i >= 0) {
        printf("%d.. ", i);
        i--;
    }
    printf("FIM!\n");

    printf("Do...While: ");
    i = 10;
    do {
        printf("%d.. ", i);
        i--;
    } while (i >= 0);
    printf("FIM!\n");

    return 0;
}
