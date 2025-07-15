#include <stdio.h>

int main() {
    char str[100];
    int i = 0, tamanho = 0;

    printf("Digite uma string: ");
    scanf("%[^\n]", str);

    while (str[tamanho] != '\0') {
        tamanho++;
    }

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
