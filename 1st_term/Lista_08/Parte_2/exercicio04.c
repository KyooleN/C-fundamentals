/******************************************************************************

8. Crie um programa que preencha duas matrizes 3 x 8 com números inteiros, calcule e mostre:
■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 x 8;
■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 x 8. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz1[3][8], matriz2[3][8], matrizSoma[3][8], matrizSubtracao[3][8], i, j;
    
    for(i = 0; i < 3; i++) //recebendo elementos das matrizes 1 e 2
    {
        for(j = 0; j < 8; j++)
        {
            printf("Insira um valor para a linha %d coluna %d da Matriz 1: ", i + 1, j + 1);
            scanf(" %d", &matriz1[i][j]);
            
            printf("Insira um valor para a linha %d coluna %d da Matriz 2: ", i + 1, j + 1);
            scanf(" %d", &matriz2[i][j]);
            
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];//criando a matriz de soma
            matrizSubtracao[i][j] = matriz1[i][j] - matriz2[i][j];//criando a matriz de subtração
            
        }
    }
    
    printf("\n\nSoma das matrizes:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("[%d] ", matrizSoma[i][j]);
        }
    }
    
    printf("\n\n Subtração das matrizes:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("[%d] ", matrizSubtracao[i][j]);
        }
    }
}

