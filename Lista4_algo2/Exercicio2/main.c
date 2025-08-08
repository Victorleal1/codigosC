#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int *vetor= NULL;


    printf("\nDigite o tamanho do vetor: ");
    scanf("%d",&tamanho);

    vetor=(int*)malloc(tamanho*sizeof(int));

    printf("\nDigite os valores do vetor: ");
    for(int i=0; i<tamanho; i++){
        scanf("%d",&vetor[i]);
    }

    printf("\nOs valores digitados: ");
    for(int i=0 ; i< tamanho; i++){
    printf("%d",vetor[i]);
    }

    free(vetor);

    return 0;
}
