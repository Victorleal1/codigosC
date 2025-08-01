#include <stdio.h>
#include <stdlib.h>

int trocarVariaveis(int *v1, int *v2);

int main()
{
    int a, b;

    printf("\nDigite de valor de A: ");
    scanf("%d",&a);
    printf("\nDigite o valor de B : ");
    scanf("%d",&b);

    trocarVariaveis(&a,&b);

    printf("\nTroca de valores de A:%d e B:%d\n",a,b);


    return 0;
}
int trocarVariaveis(int *v1, int *v2){
    int temp;
    temp = *v1;
    *v1= *v2;
    *v2= temp;
    return 0;
}
