/******************************************************************************

19. Faça um programa que preencha uma matriz 8 x 6 de inteiros, calcule e mostre a média dos elementos
das linhas pares da matriz. 


*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[8][6], i, j, somaElementosLinhasPares = 0;
    
    
    for(i = 0; i < 8; i++)//recebendo elementos da matriz
    {
        for(j = 0; j < 6; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i+ 1, j + 1);
            scanf(" %d", &matriz[i][j]);
            
            if((i + 1) % 2 == 0)//caso a linha seja par
            {
                somaElementosLinhasPares += matriz[i][j];
            }
        }
    }
    
    printf("Média dos elementos das linhas pares: %.2f", (float)somaElementosLinhasPares/(4*6));
}

