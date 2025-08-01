#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor1, valor2;
   int *p1, *p2;

   printf("\nDigite um valor inteiro: ");
   scanf("%d",&valor1);
   printf("\nDigite um segundo valor inteiro: ");
   scanf("%d",&valor2);

   p1=&valor1;
   p2=&valor2;

   printf("\nO endereço valor 1:\n%d",p1);
   printf("\nO endereço valor 2:\n%d",p2);

   if(p1 > p2){
    printf("\n\O conteudo do endereço do primeiro valor: %d\n",valor1);
   }
   else{
    printf("\nO conteudo do endereço do segundo valor 2: %d\n",valor2);
   }
    return 0;
}
