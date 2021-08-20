/******************************************************************************

1. Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■ todos os números pares;
■ a quantidade de números pares;
■ todos os números ímpares;
■ a quantidade de números ímpares. 

*******************************************************************************/
#include <stdio.h>


int main()
{
    int numero[6], numerosPares = 0, numerosImpares = 0, j = 1, i;
    
    for(i = 0; i < 6; i++)
    {
        printf("Insira um número inteiro (vez %d):\n", j);
        j++;
        scanf(" %d", &numero[i]);
       
    }
    
    printf("Números pares: ");
    for(i = 0; i < 6; i++)
    {
        if(numero[i] % 2 == 0)
        {
            numerosPares++;
            printf("[%d] ", numero[i]);
        }
        
    }
    printf("\nQuantidade de números pares: %d", numerosPares);
    
    printf("\nNúmeros ímpares: ");
    for(i = 0; i < 6; i++)
    {
        if(numero[i] % 2 != 0)
        {
            numerosImpares++;
            printf("[%d] ", numero[i]);
        }
        
    }
    
    printf("\nQuantidade de números ímpares: %d", numerosImpares);
   
    
    
    
   

    
}

