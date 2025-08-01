#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *a, int *b);

int main()
{
    int num1, num2;

    printf("\nDigite um primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite um segundo numero: ");
    scanf("%d",&num2);

    int soma= soma_dobro(&num1, &num2);

    printf("\nDobro de A:%d",num1);
    printf("\nDobro de B:%d",num2);

    printf("\nA soma do dobro dos numeros\n%d",soma);


    return 0;
}

int soma_dobro(int *a, int*b ){
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}

