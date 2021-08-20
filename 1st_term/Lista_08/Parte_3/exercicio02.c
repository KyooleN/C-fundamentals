/******************************************************************************

21. Faça uma sub-rotina que receba uma matriz 10X10 e determine o maior elemento acima da diagonal
principal. Esse valor deverá ser mostrado no programa principal.

*******************************************************************************/
#include <stdio.h>

int MaiorValor(int matriz[10][10])
{
    int i, j, k = 0, maiorValor = 0, superiorDiagonal[45];
    
    for(i = 0; i < 10; i++)//percoreendo a matriz
    {
        for( j = 0; j < 10; j++)
        {
            if(j > i)//se estiver acima da diagonal principal
            {
                superiorDiagonal[k] = matriz[i][j];
               
                if(superiorDiagonal[k] > maiorValor)//descobrindo o maior valor
                {
                    maiorValor = superiorDiagonal[k];
                }
                
                 k++;
            }
        }
    }
    
    return maiorValor;
}

int main()
{
    int matriz[10][10], maiorValor, i, j;
    
    for(i = 0; i < 10; i++)//recebendo valores da matriz
    {
        for(j = 0; j < 10; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    maiorValor = MaiorValor(matriz);
    
    printf("\nMaior valor acima da diagonal principal: %d", maiorValor);

    
}
                

