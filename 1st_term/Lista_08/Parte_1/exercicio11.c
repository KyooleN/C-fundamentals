/******************************************************************************

22. Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j = 0, vetorA[10], vetorB[10];
    
    for(i = 0; i < 10; i++) //Scan do vetor A
    {
        printf("\nInsira o %dº número: ", i + 1); 
        scanf(" %d", &vetorA[i]);
        
        if(vetorA[i] > 0) //Compactando o vetor A (retirando nulos e negativos) no vetor B
        {
            vetorB[j] = vetorA[i];
            j++;
        }
    }
    
    printf("\n\nVetor B: \n");
    for(i = 0; i < j; i++)
    {
        printf("[%d] ", vetorB[i]);
    }
    
    
}

