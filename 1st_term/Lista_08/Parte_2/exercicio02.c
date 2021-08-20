/******************************************************************************

2. Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
■ a quantidade de elementos entre 12 e 20 em cada linha;
■ a média dos elementos pares da matriz. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][4], i, j, entre12e20[2] = {0}, elementosPares = 0, somaValorElementosPares = 0;
    
    for(i = 0; i < 2; i++)//recebendo os elementos da matriz
    {
        for(j = 0; j < 4; j++)
        {
            printf("\nInsira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
            
            if(matriz[i][j] > 12 && matriz[i][j] <= 20)//caso o elemento esteja entre 12 e 20
            {
                entre12e20[i]++;
            }
            
            if(matriz[i][j] % 2 == 0)//Caso o elemento seja par
            {
                elementosPares++;
                somaValorElementosPares += matriz[i][j];
            }
        }
    }
    
    for(i = 0; i < 2; i++)
    {
        printf("\nNúmero de elementos entre 12 e 20 na linha %d: %d", i + 1, entre12e20[i]);
    }
    
    printf("\n\nMédia dos valores pares da matriz: %.2f", (float)somaValorElementosPares/(float)elementosPares);
    
}

