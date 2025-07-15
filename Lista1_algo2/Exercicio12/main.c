#include <stdio.h>

int main() {
    char texto[100];
    int frequenciaLetras[52] = {0};
    int indice = 0;
    int existeLetraRepetida = 0;

    printf("Digite uma string: ");
    scanf("%[^\n]", texto);

    while (texto[indice] != '\0') {
        char caractereAtual = texto[indice];

        if (caractereAtual >= 'A' && caractereAtual <= 'Z') {
            frequenciaLetras[caractereAtual - 'A']++;
        } else if (caractereAtual >= 'a' && caractereAtual <= 'z') {
            frequenciaLetras[26 + (caractereAtual - 'a')]++;
        }

        indice++;
    }

    printf("Letras repetidas: ");
    for (indice = 0; indice < 52; indice++) {
        if (frequenciaLetras[indice] > 1) {
            existeLetraRepetida = 1;
            if (indice < 26) {
                printf("%c ", 'A' + indice);
            } else {
                printf("%c ", 'a' + (indice - 26));
            }
        }
    }

    if (!existeLetraRepetida) {
        printf("Nenhuma letra repetida.");
    }

    printf("\n");
    return 0;
}
