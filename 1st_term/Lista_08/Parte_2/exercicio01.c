/******************************************************************************

1. Faça um programa que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, matriz[3][5];
    
    for(i = 0; i < 3; i++) //Recebendo dados da matriz
    {
        for(j = 0; j < 5; j++)
        {
            printf("Insira o número da linha %d coluna %d da matriz: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    printf("Números entre 15 e 20:\n");
   for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 5; j++)
        {
            if(matriz[i][j] > 15 && matriz[i][j]<= 20)
            {
                printf("[%d] ", matriz[i][j]);
            }
        }
    }
   

}


