/******************************************************************************

22. Criar um programa que:
■ utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
■ utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz;
Os resultados deverão ser mostrados no programa principal.

*******************************************************************************/
#include <stdio.h>

float ReceberMatriz(float matriz[10][5])
{
    int i, j;
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Insira o número da linha %d coluna %d: ", i + 1, j + 1);
            scanf(" %f", &matriz[i][j]);
        }
    }
    
    return matriz[10][5];
}

int SomaElementos(float matriz[10][5])
{
    int i, j;
    float soma = 0;
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i >= 6)//caso esteja abaixo da linha 6
            {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int main()
{
    float matriz[10][5], soma;
    
   matriz[10][5] = ReceberMatriz(matriz);
   soma = SomaElementos(matriz);
   
   printf("A soma dos elementos abaixo da sexta linha é igual a %.2f", soma);

    
}

