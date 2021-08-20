/******************************************************************************

18. Crie um programa que preencha uma matriz 5 x 5 de números reais, 
calcule e mostre a soma dos elementos da diagonal secundária. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float matriz[5][5], somaElementosDiagonal = 0;
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("\nInsira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %f", &matriz[i][j]);
        }
    }
    
    // 'i' e 'j' estão com valores iguais a 4.
    do //soma dos elementos da diagonal secundária
    {
        somaElementosDiagonal += matriz[i][j];
        i--;
        j--;
    }
    while(i >= 0);
    
    printf("Soma dos elementos da diagonal secundária: %.2f", somaElementosDiagonal);
}

