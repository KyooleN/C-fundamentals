/******************************************************************************

25. Faça um programa que leia um vetor com quinze posições para números inteiros.
Depois da leitura, divida todos os seus elementos pelo maior valor do vetor.
Mostre o vetor após os cálculos. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vetor[15], maiorValor = 0;
    
    for(int i = 0; i < 15; i++) //recebendo elementos do vetor
    {
        printf("Insira o %dº número do vetor: ", i + 1); 
        scanf(" %f", &vetor[i]);
        
        if(maiorValor < vetor[i]) //identificando o maior número
        {
            maiorValor = vetor[i];
        }
    }
    
    for(int i = 0; i < 15; i++) //realizando a divisão dos elementos pelo maior valor
    {
        vetor[i] = vetor[i]/maiorValor;
        printf("[%.2f] ", vetor[i]);
    }
   
}

