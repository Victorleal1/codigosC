#include <stdio.h>
#include <stdlib.h>

char* alocarString(int tamanho) {
    return (char*) malloc((tamanho + 1) * sizeof(char));
}

int main() {
    int tamanho, i;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar();

    str = alocarString(tamanho);
    if (str == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    printf("Digite a string: ");
    fgets(str, tamanho + 1, stdin);

    printf("String sem vogais: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'A' &&
            str[i] != 'e' && str[i] != 'E' &&
            str[i] != 'i' && str[i] != 'I' &&
            str[i] != 'o' && str[i] != 'O' &&
            str[i] != 'u' && str[i] != 'U') {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    free(str);
    str = NULL;

    return 0;
}
