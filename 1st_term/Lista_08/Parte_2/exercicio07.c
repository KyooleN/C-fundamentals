/******************************************************************************

13. Elabore um programa que: preencha uma matriz 6 x 4; recalcule a matriz digitada, 
onde cada linha deverá ser multiplicada pelo maior elemento da linha em questão;
mostre a matriz resultante. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, maiorNumeroLinha[6], matriz[6][4];
    
    for(i = 0; i < 6; i++)//iniciando os elementos do vetor maiorNumeroLinha como 0
    {
        maiorNumeroLinha[i] = 0;
    }
    
    for(i = 0; i < 6; i++)//recebendo os elementos da matriz
    {
        for(j = 0; j < 4; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
            
            if(matriz[i][j] > maiorNumeroLinha[i])//indicando o maior número de cada linha
            {
                maiorNumeroLinha[i] = matriz[i][j];
            }
            
        }
    }
    
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 4; j++)
        {
            matriz[i][j] *= maiorNumeroLinha[i];//efetuando a multiplicação pelo maior número
        }
    }
    
    printf("Matriz resultante: \n");
    
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
    }
    

}


