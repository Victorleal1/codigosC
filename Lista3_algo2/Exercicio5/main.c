#include <stdio.h>
#include <stdlib.h>
int retornarValor(int *v1, int*v2);

int main()
{

    int a, b;

    printf("\nDigite o valor de A: ");
    scanf("%d",&a);
    printf("\nDigite o valor de B: ");
    scanf("%d",&b);

    retornarValor(&a,&b);

    printf("\nValor de A:%d(maior) e Valor de B:%d(menor)\n",a,b);

    return 0;
}

int retornarValor(int *v1, int *v2){

    if(*v1<*v2){
      int temp=*v1;
        *v1=*v2;
        *v2=temp;
    }
}


