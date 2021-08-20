/******************************************************************************

2. Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■ os números múltiplos de 2;
■ os números múltiplos de 3;
■ os números múltiplos de 2 e de 3. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero[7], i, j = 1;
   
   for(i = 0; i < 7; i++)
   {
        printf("Insira um número: (vez %d)\n", j);
        scanf(" %d", &numero[i]);
        j++;  
   }
   
   printf("\nMúltiplos de 2: ");
   for(i = 0; i < 6; i++)
   {
       if(numero[i] % 2 == 0){
         printf("[%d] ", numero[i]);  
       }
    }
    
    printf("\nMúltiplos de 3: ");
    for(i = 0; i < 6; i++)
   {
       if(numero[i] % 3 == 0){
         printf("[%d] ", numero[i]);  
       }
    }
    
    printf("\nMúltiplos de 2 e 3: ");
    for(i = 0; i < 6; i++)
   {
       if(numero[i] % 2 == 0 && numero[i] % 3 == 0){
         printf("[%d] ", numero[i]);  
       }
    }
    
    
}

