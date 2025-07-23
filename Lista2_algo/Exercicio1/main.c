#include <stdio.h>
#include <stdlib.h>

int dobro(int numero);

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("\nO dobro do numero digitado eh: %d", dobro(num));


    return 0;
}

int dobro(int numero){
    numero=numero*2;

    return numero;
}
