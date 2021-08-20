/******************************************************************************

14. Faça um programa que preencha uma matriz 2 x 3, calcule e mostre a quantidade
de elementos da matriz que não pertencem ao intervalo [5,15]. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, matriz[2][3], naoPertentce5a20 = 0;
    
    for(i = 0; i < 2; i++)//recebendo elementos da matriz
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nInsira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
            if(matriz[i][j] > 15 || matriz[i][j] < 5)
            {
                naoPertentce5a20++;//caso o número nao pertença ao intervalo descrito
            }
        }
    }
    
    printf("%d números da matriz estão fora do intervalo entre 5 e 15.", naoPertentce5a20);
}


