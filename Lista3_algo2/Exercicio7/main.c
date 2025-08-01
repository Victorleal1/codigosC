#include <stdio.h>
#include <stdlib.h>
void calcular_modificar(int *a1, int*b1);

int main()
{
   int a, b;

   printf("\nDigite o valor de 'A': ");
   scanf("%d",&a);
   printf("\nDigite o valor de 'B': ");
   scanf("%d",&b);

   calcular_modificar(&a, &b);

   printf("\n\nResultado da soma armazendada em 'A':%d\n",a);
   printf("\nO valor de 'B'(sem mudança):%d\n\n",b);
    return 0;
}

void calcular_modificar(int *a1, int *b1){
    *a1 = *a1 + *b1;
}
