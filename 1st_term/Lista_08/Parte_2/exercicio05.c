/******************************************************************************

9. Faça um programa que preencha uma matriz 3 x 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.

*******************************************************************************/
#include <stdio.h>

int main()


{
    float matriz[3][3], num;
    int i, j;

    printf("Insira um número para multiplicar a matriz: ");
    scanf(" %f", &num);
    
    for(i = 0; i < 3; i++)//recebendo elementos da matriz
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nInsira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %f", &matriz[i][j]);
            matriz[i][j] *= num; //matriz resultante
        }
    }
    
    printf("\n\nMatriz resultante da multiplicação:\n");
    for(i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
        {
            printf("[%.2f] ", matriz[i][j]);
        }
    }
    
    

    
}

