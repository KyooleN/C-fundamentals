/******************************************************************************

17. Faça um programa que preencha dois vetores de dez posições cada, 
determine e mostre um terceiro contendo os elementos dos dois vetores 
anteriores ordenados de maneira decrescente.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j = 0, vetor1[10], vetor2[10], vetorDecrescente[20], decrescente;
    
    for(i = 0; i < 10; i++)
    {
        printf("Insira um número para o primeiro vetor(vez %d): \n", i + 1);
        scanf(" %d", &vetor1[i]);
        vetorDecrescente[i] = vetor1[i];
    
        printf(" Insira um número par o segundo vetor (vez %d): \n", i + 1);
        scanf(" %d", &vetor2[i]); 
        vetorDecrescente[i + 10] = vetor2[i];
    }
    
    
   for(i = 0; i < 20; i++)
   {
       for(j = i + 1; j < 20; j++)
       {
           if(vetorDecrescente[i] < vetorDecrescente[j])
           {
               decrescente = vetorDecrescente[i];
               vetorDecrescente[i] = vetorDecrescente[j];
               vetorDecrescente[j] = decrescente;
           }
       }
   }
      
      printf("Ordem decrescente:\n"); 
    for(i = 0; i < 20; i++)
    {
        printf("[%d] ", vetorDecrescente[i]);
    }
    

    
}
        
        
        
        



