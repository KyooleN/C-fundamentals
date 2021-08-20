/******************************************************************************

24. Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetorA[15], vetorResultante[15], k = 0, maior = 0;
    
    for(int i = 0; i < 15; i++) //Recebendo os elementos do vetor A
    {
        printf("Insira o %dº número: ", i + 1);
        scanf(" %d", &vetorA[i]);
    
        if(maior < vetorA[i]) //definindo o maior número inserido
        {
             maior = vetorA[i];
        } 
    }
    
    int vetorPrimo[maior];
    
    for(int i = 0; i < maior; i++)
    {
        vetorPrimo[i] = i + 2; //declarando  os elementos do vetor Primo como\
                                    todos os números menores que o maior número do vetor A, != 1 && > 0
    }
    
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < maior; j++) //Os primos não podem ser divisíveis por outro menor que eles além de 1
        {
            if(vetorA[i] != vetorPrimo[j] && vetorA[i] % vetorPrimo[j] != 0)
            {
                if(j == (maior - 1) && vetorA[i] != 1) //Caso ja tenha passado por todos os números e seja primo
                {
                    vetorResultante[k] = vetorA[i];
                    k++;
                    break;
                }
            }
            
            else if(vetorA[i] != vetorPrimo[j] && vetorA[i] % vetorPrimo[j] == 0) //caso não seja primo
            {
                break;
            }
        }
    }
    
    printf("Números primos encontrados:\n");
    for(int i = 0; i < k; i++)
    {
        printf("[%d] ", vetorResultante[i]);
    }
                    
                
}
            
                
                
            
           
            
               
                



