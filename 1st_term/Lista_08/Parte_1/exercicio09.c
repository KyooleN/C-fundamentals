/******************************************************************************

20. Faça um programa que leia um vetor com dez posições para números inteiros
e mostre somente os números positivos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numero[10];
    
    for(i = 0; i < 10; i++)
    {
       printf("Insira o %dº número inteiro:\n", i + 1);
       scanf(" %d", &numero[i]); 
    }
    
    printf("Números positivos:\n");
    for(i = 0; i < 10; i++)
    {
        if(numero[i] >= 0)
        {
            printf("[%d] ", numero[i]);
        }
    }
    
}

    


