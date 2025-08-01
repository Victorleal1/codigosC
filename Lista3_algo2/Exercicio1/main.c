#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=15;
    float y=3.10f;
    char z='P';

    int *valor1=NULL;
    float *valor2=NULL;
    char *valor3=NULL;

    valor1=&x;
    valor2=&y;
    valor3=&z;

    printf("----Valores pre modificados----");
    printf("\nValor inteiro: %d",x);
    printf("\nValor real: %.2f",y);
    printf("\nValor caractere: %c\n",z);

    *valor1=12;
    *valor2=1.20;
    *valor3='K';

    printf("\n----Valores modificados----");
    printf("\nValor inteiro: %d",x);
    printf("\nValor real %.2f",y);
    printf("\nValor caractere: %c",z);




    return 0;
}
