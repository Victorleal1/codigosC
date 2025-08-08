#include <stdio.h>
#include <stdlib.h>

int main()
{
   int bilhete[6], loteria[6];
   int i, j, acertos=0;
   int *vetor=NULL;
   int k=0;

   printf("\nDigite os 6 numeros da loteria: ");
   for(i=0; i<6; i++){
    printf("\n%d numero sorteado: ",i+1);
    scanf("%d",&loteria[i]);
   }

   printf("\nDigite os 6 numero do seu bilhete: ");
   for(j=0; j<6; j++){
    printf("\n%d numero do seu bilhete: ",j+1);
    scanf("%d",&bilhete[j]);
   }


   for(i=0; i<6; i++){
    for(j=0; j<6; j++){
        if(loteria[i]==bilhete[j]){
            acertos++;
        }
    }
   }

   vetor=(int*)malloc(acertos*sizeof(int));

   for(i=0; i<6; i++){
    for(j=0; j<6; j++){
        if(bilhete[i]==loteria[j]){
            vetor[k++]=bilhete[i];
        }
    }

   }

    printf("\nNumeros sorteados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", loteria[i]);
    }

    printf("\nNumeros corretos (%d): ", acertos);
    for (i = 0; i < acertos; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);


    return 0;
}
