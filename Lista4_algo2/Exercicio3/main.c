#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *vetor=NULL;
   int tamanho, par=0, impar=0;


   printf("Digite o tamanho do vetor:");
   scanf("%d",&tamanho);

   vetor=(int*)malloc(tamanho*sizeof(int));

   if(vetor==NULL){
    printf("\nErro ao alocar memoria\n");
    return 1;
   }

   printf("\nDigite o valores do vetor:");
   for(int i=0; i<tamanho; i++){
        scanf("%d",&vetor[i]);


        if(vetor[i]%2==0){
            par++;
        }
        else{
            impar++;
        }
   }



   printf("\nQuantidade numeros pares: %d\n",par);
   printf("\nQuantidade numeros impares: %d\n",impar);

   free(vetor);

    return 0;
}
