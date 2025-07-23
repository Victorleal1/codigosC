#include <stdio.h>
#include <stdlib.h>

void data(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;

    printf("Digite o dia, mes e ano: ");
    scanf("%d %d %d",&dia, &mes, &ano );

    printf("A data digitada: ");
    data(dia, mes, ano);

    return 0;
}

void data(int dia, int mes, int ano)
{
    char nome_meses [13][15]={"janeiro","fevereiro","março","abril","maio","junho",
    "julho","agosto","setembro","outubro","novembro","dezembro"};


    if(mes>=1 && mes<=12){
        printf("\n%d de %s de %d\n",dia, nome_meses[mes-1], ano);
    }else{
        printf("\n mes invalido");
    }
}
