/******************************************************************************

20. Elabore um programa que preencha uma matriz 5 x 5 com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
encontrado e mostrar a matriz resultante após as multiplicações.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float matriz[5][5], maiorValor = 0;
    int i, j;
    
    for(i = 0; i < 5; i++)//recebendo elementos da matriz
    {
        for(j = 0; j < 5; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %f", &matriz[i][j]);
            
            if(matriz[i][j] > maiorValor)//descobrindo o maior valor
            {
                maiorValor = matriz[i][j];
            }
        }
    }
    
    i = 0;
    j = 0;
    do //Multiplicação da diagonal pelo maior valor
    {
        matriz[i][j] *= maiorValor;
        i++;
        j++;
    }
    while(i < 5);
    
    for(i = 0; i < 5; i++)//output
    {
        for(j = 0; j < 5; j++)
        {
            printf("[%.2f] ", matriz[i][j]);
            
            if(j == 4)
            {
                printf("\n");
            }
            
        }
    }
}
            

