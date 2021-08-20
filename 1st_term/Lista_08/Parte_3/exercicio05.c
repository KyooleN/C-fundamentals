/******************************************************************************

15. Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X.

*******************************************************************************/
#include <stdio.h>

int Pares(int vetorX[])
{
    int i, totalPares = 0;
    
    for(i = 0; i < 15; i++)//analisando os elementos do vetor
    {
        if(vetorX[i] % 2 == 0)
        {
            totalPares++;
        }
    }
    return totalPares;
}

int main()
{
    int vetorX[15], i, totalPares;
    
    for(i = 0; i < 15; i++)//recebendo os valores do vetor X
    {
        printf("Insira o %dº número: ", i + 1);
        scanf(" %d", &vetorX[i]);
    }
    
    totalPares = Pares(vetorX);
    
    printf("Total de números pares no vetor X: %d", totalPares);
    
}

