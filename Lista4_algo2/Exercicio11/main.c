#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int n, i;
    Aluno *alunos;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    alunos = (Aluno*) malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    printf("\n=== Dados dos alunos ===\n");
    for (i = 0; i < n; i++) {
        printf("Matricula: %d | Sobrenome: %s | Ano de nascimento: %d\n",
               alunos[i].matricula,
               alunos[i].sobrenome,
               alunos[i].anoNascimento);
    }

    free(alunos);
    alunos = NULL;

    return 0;
}
