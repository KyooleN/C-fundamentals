/******************************************************************************

18. Faça um programa que preencha um vetor com quinze números, determine e mostre:
■ o maior número e a posição por ele ocupada no vetor;
■ o menor número e a posição por ele ocupada no vetor. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numero[15], j = 0, k = 0;
    
    for(i = 0; i < 15; i++)
    {
      printf("Insira um número (vez %d)\n", i + 1);
      scanf(" %d", &numero[i]);
    }
    
   int maior = numero[0];
   int menor = numero[0];
    
    for(i = 0; i < 15; i++)
    {
        if(maior < numero[i])
        {
            maior = numero[i];
            k = i;
        }
        if(menor > numero[i])
        {
            menor = numero[i];
            j = i;
        }
    }
    
    printf("Menor número: [%d], posição [%d]\n", menor, j);
    printf("Maior número: [%d], posição [%d]", maior, k);
    
}
            
            



