#include <stdio.h>
#include <stdlib.h>


int main()
{
   int *vetor=NULL;
   int i, zeros=0;
   int tamanho=1500, x=10;

   vetor=(int*)calloc(tamanho, sizeof(int));

   if(vetor==NULL){
    printf("\nErro de alocação de memoria!!");
    return 1;
   }

   for( i=0; i<tamanho; i++){
    if(vetor[i]==0){
        zeros++;
    }
   }

   printf("\nQuantidade de zeros encontrados--> %d",zeros);

   for(i=0; i< tamanho; i++){
    vetor[i]=i;
   }

   printf("\n\nOs dez primeiros elementos do vetor");
   for(i=0; i<x; i++){
    printf("\nvetor[%d]=%d",i, vetor[i]);
   }


   printf("\n\nOs Dez ultimos numeros de vetor");
   for(i=tamanho-x; i<tamanho; i++){
    printf("\nvetor[%d]=%d",i ,vetor[i]);
   }
free(vetor);
    return 0;
}
