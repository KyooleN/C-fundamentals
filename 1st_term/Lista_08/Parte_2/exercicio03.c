/******************************************************************************

7. Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma 
segunda matriz N de ordem 6 x 4,
 calcule e imprima a soma das linhas de M com as colunas de N. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrizM[4][6], matrizN[6][4], i, j, soma[4];
    
    for(i = 0; i < 4; i++)//inicializando a matriz de soma com todos os elementos iguais a zero
    {
        soma[i] = 0;
    }
    
    
    for(i = 0; i < 4; i++) //recebendo os elementos da matrizM
    {
        for(j = 0; j < 6; j++)
        {
            printf("Insira o número da linha %d coluna %d da matriz M: ", i + 1, j + 1);
            scanf(" %d", &matrizM[i][j]);
            soma[i] += matrizM[i][j];//realizando a soma das linhas da matriz
        }
    }
    
    for(i = 0; i < 6; i++) //recebendo os elementos da matrizN
    {
        for(j = 0; j < 4; j++)
        {
            printf("Insira o número da linha %d coluna %d da matriz N: ", i + 1, j + 1);
            scanf(" %d", &matrizN[i][j]);
           
        }
    }
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 6; j++)
        {
             soma[i] += matrizN[j][i]; //realizando a soma das colunas da matriz
        }
    }
    
    printf("Soma das linhas da matrizM com as colunas da matrizN:\n");
    for(i = 0; i < 4; i++)
    {
        printf("[%d] ", soma[i]);
    }
    
}

