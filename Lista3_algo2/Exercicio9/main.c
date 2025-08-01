#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3];
    int i, j;

    printf("Enderecos de cada posicao da matriz 3x3:\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
             printf("Endereco de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }
    return 0;
}
