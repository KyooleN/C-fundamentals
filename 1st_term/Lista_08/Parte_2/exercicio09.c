/******************************************************************************

17. Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10 x 10.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[10][10], i, j, somaValorElementosDiagonal = 0;
    
    for(i = 0; i < 10; i++)//recebendo elementos da matriz
    {
        for(j = 0; j < 10; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i + 1,j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    i = 0; //para fazer o calculo da media da diagonal
    j = 0;
    do //calculo da media da diagonal
    {
        somaValorElementosDiagonal += matriz[i][j];
        j++;
        i++;
    }
    while(i < 10);
    
    printf("\nMédia dos elementos da diagonal princpal: %.2f", (float)somaValorElementosDiagonal/10);
}

