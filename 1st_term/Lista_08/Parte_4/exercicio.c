/******************************************************************************

Parte II
Faça uma função para calcular a multiplicação de duas matrizes n x n.

*******************************************************************************/
#include <stdio.h>

int  MultiplicaMatriz(int lado, int matriz1[lado][lado], int matriz2[lado][lado], int matrizResultante[lado][lado])
{
    int i, j, k;
    
     for(i = 0; i < lado; i++)//iniciando a matriz resultante como 0
    {
        for(j = 0; j < lado; j++)
        {
            matrizResultante[i][j] = 0;
        }
    }
   
   for(k = 0; k < lado; k++) //calculo da multiplicação de matrizes
   {
        for(i = 0; i < lado; i++)
        {
            for(j = 0; j < lado; j++)
            {
                
                 matrizResultante[k][i] += matriz1[k][j] * matriz2[j][i]; 
                
            }
        }        
    
    }
       
    
    return matrizResultante[lado][lado];
}

int main()
{
    int i, j, lado;
    
    printf("Insira o tamanho dos lados das matrizes: ");
    scanf(" %d", &lado);
    
    int matriz1[lado][lado], matriz2[lado][lado];
    
    for(i = 0; i < lado; i++)//recebendo os dados da primeira matriz
    {
        for(j = 0; j < lado; j++)
        {
            printf("Insira o número da linha %d coluna %d da matriz 1: ", i+ 1, j + 1);
            scanf(" %d", &matriz1[i][j]);
        }
    }
    
    
    
    for(i = 0; i < lado; i++)//recebendo os dados da segunda matriz
    {
        for(j = 0; j < lado; j++)
        {
            printf("Insira o número da linha %d coluna %d da matriz 2: ", i + 1, j + 1);
            scanf(" %d", &matriz2[i][j]);
        }
    }
    
    int matrizResultante[lado][lado];
    
     MultiplicaMatriz(lado, matriz1, matriz2, matrizResultante); //realizando o calculo
    
     for(i = 0; i < lado; i++) //output
    {
        for(j = 0; j < lado; j++)
        {
            printf("[%d] ",matrizResultante[i][j]);
            if(j == (lado - 1))
            {
                printf("\n");
            }
        }
    }
    
}

