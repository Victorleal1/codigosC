#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;
    int *p1=NULL, *p2=NULL;

    p1=&valor1;
    p2=&valor2;

    printf("\n1  Valor 1 %d\n", p1);
    printf("\n2  Valor 2  %d\n", p2);


    if(p1 > p2){
        printf("\nO endereço de valor 1: \n%d\n", p1);
    }
    else{
        printf("\nO endereço de valor 2:  %d", p2);
    }
    return 0;
}
