/******************************************************************************

21. Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, vetor1[10], vetorResultante[10];
    
    for(i = 0; i < 10; i++)
    {
        printf("\nInsira o %dº número: ", i + 1);
        scanf(" %d", &vetor1[i]); 
    }
    
    for(i = 0; i < 10; i++)
    {
        vetorResultante[i] = vetor1[i];
        if(vetor1[i] == 0) //caso o valor seja nulo
        {
            vetorResultante[i] = 1;
        }
    }
    
    //output
    printf("Primeiro vetor: \n");
    for(i = 0; i < 10; i++)
    {
        printf("[%d] ", vetor1[i]);
    }
    
    
    printf("\n\nSegundo vetor: \n");
     for(i = 0; i < 10; i++)
    {
        printf("[%d] ", vetorResultante[i]);
    }
    
    

}
            

