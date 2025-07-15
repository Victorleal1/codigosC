#include <stdio.h>

typedef struct {
    int ddd;
    char telefone[15];
} Telefone;

int main() {
    Telefone telefones[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite o DDD: ");
        scanf("%d", &telefones[i].ddd);
        printf("Digite o telefone: ");
        scanf(" %14[^\n]", telefones[i].telefone);
    }

    printf("Telefones cadastrados:\n");
    for (int i = 0; i < 2; i++) {


        printf("(%d) %c ", telefones[i].ddd, telefones[i].telefone[0]);

        for (int j = 1; telefones[i].telefone[j] != '\0'; j++) {
            printf("%c", telefones[i].telefone[j]);
        }
        printf("\n");
    }

    return 0;
}
