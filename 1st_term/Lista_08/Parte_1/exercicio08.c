/******************************************************************************

19. Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, vetor1[10], vetor2[10], vetor3[10];
    for(i = 0; i < 10; i++)
    {
        printf("Insira um número para o primeiro vetor (vez %d): \n", i + 1);
        scanf(" %d", &vetor1[i]);
    
        printf("Insira um número para o segundo vetor:\n");
        scanf(" %d", &vetor2[i]);  
    }
    
    for(i = 0; i < 10; i++)
    {
        vetor3[i] = vetor1[i] * vetor2[i];
        printf("[%d] ", vetor3[i]);
    }
    

    
}

