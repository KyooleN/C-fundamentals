/******************************************************************************

10. Crie um programa que preencha uma matriz 5 x 5 com números inteiros, calcule e mostre a soma:
■ dos elementos da linha 4;
■ dos elementos da coluna 2;
■ dos elementos da diagonal principal;
■ dos elementos da diagonal secundária;
■ de todos os elementos da matriz. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5], somaLinha4 = 0, somaColuna2 = 0,somaDiagonaPrincipal = 0, 
    somaDiagonalSecundaria = 0, somaTotal = 0;
    
    
    for(int i = 0; i < 5; i++)//recebendo os elementos da matriz
    {
        for(int j = 0; j < 5; j++)
        {
            printf("\nInsira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
            
            somaTotal += matriz[i][j]; //soma total
            
            if(i == 3) //linha 4
            {
                somaLinha4 += matriz[i][j];
            }
            
            if(j == 1)// coluna 2
            {
                somaColuna2 += matriz[i][j];
            }
        }
    }
    
    int i = 0;
    int j = 0;
    
    do //Soma da diagonal principal
    {
        somaDiagonaPrincipal += matriz[i][j];
        i++;
        j++;
    }
    while(i <= 4);
    
    i = 0;
    
    do //Soma diagonal secundária
    {
        somaDiagonalSecundaria += matriz[i][j];
        i++;
        j--;
    }
    while(i <= 4);
    
    printf("\n\nSoma dos elementos da linha 4: %d\n", somaLinha4);
    printf("\n\nSoma dos elementos da coluna 2: %d\n", somaColuna2);
    printf("\n\nSoma dos elementos da diagonal principal: %d\n", somaDiagonaPrincipal);
    printf("\n\nSoma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);
    printf("\n\nSoma dos elementos da matriz: %d\n", somaTotal);
}
            
            

