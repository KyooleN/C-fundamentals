/******************************************************************************

10. Faça um programa que preencha um vetor com dez números inteiros 
e um segundo vetor com cinco números inteiros, calcule e mostre dois vetores resultantes. 
O primeiro vetor resultante será composto pela soma de cada número par do primeiro vetor
somado a todos os números do segundo vetor. 
O segundo vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor


*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j = 0, k, l = 0, numero1[10], numero2[5], divisores = 0, soma[10], divisaoNumeros[10], Soma = 0;
    
    for(i = 0; i < 10; i++)
    {
        printf("Insira um número inteiro para o primeiro vetor (vez %d)\n", i + 1);
        scanf(" %d", &numero1[i]);
    }
    
    for(i = 0; i < 5; i++)
    {
         printf("Insira um número inteiro para o segundo vetor (vez %d)\n", i + 1);
         scanf(" %d", &numero2[i]);
    }
    
    for(i = 0; i < 10; i++) //definição do vetor resultante 1
    {
        if(numero1[i] % 2 == 0) //se o número for par
        {
            for(k = 0; k < 5; k++) //somar com todos os números do segundo vetor
            {
                Soma += numero2[k];
            }
            
           Soma += numero1[i]; //somar com o número par do vetor 1
           soma[j] = Soma;
           Soma = 0;
            j++;
        }
        
    }
    
    
    for(i = 0; i < 10; i++) //vetor resultante 2
    {
        if(numero1[i] % 2 != 0) //caso o número no vetor 1 seja ímpar
        {
            for(k = 0; k < 5; k++)
            {
                if(numero1[i] % numero2[k] == 0) //caso o número no vetor 1 seja divisível pelo do vetor 2
                {
                    divisores++; //número de divisores 
                }
            }
            
            divisaoNumeros[l] = divisores; //alocando a variável no vetor
            divisores = 0;
            l++;
        }
    }
   
    
    printf("Vetor resultante 1: ");
    for(i = 0; i < j; i++)
    {
        printf("[%d] ", soma[i]);
    }
    
    printf("\n\nVetor resultante 2: ");
    for(i = 0; i < l; i++)
    {
        printf("[%d]", divisaoNumeros[i]);
    }
    

    
}

