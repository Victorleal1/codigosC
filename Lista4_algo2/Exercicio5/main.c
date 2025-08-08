#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int n;
    int *vetor=NULL;
    int x, multiplos=0;


    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d",&n);

    vetor=(int*)malloc(n*sizeof(int));

    printf("\nDigite os valores do vetor: \n");
    for(int i=0; i<n; i++){
        printf("\nPosição %d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\nDigite o valor de x: ");
    scanf("%d",&x);

    printf("\nMultiplos de %d no vetor: ",x);
    for(int i=0; i<n; i++){
        if(vetor[i]%x==0){
            printf("%d",vetor[i]);
            multiplos++;
        }
    }

    if(multiplos!=0){
        printf("\nQuantidade de multiplos de %d: %d",x,multiplos);
    }
    else{
        printf("\n\nNão foi encontrado multiplos para o numero %d ",x);
    }

    return 0;
}
