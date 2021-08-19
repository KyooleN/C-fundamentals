/******************************************************************************

7. Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, e determine a
soma dos cubos de todos os números pares inteiros compreendidos no intervalo entre B e A. Retorne o
intervalo pesquisado e o valor da soma calculada. a entrada de dados deverá ser interrompida quando A
e B forem iguais a zero

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, i, somaTotal, comeco, fim;
    a = 1;
    b = 1;
    somaTotal = 0;
    
    while(a != 0 && b != 0)
    {
        
        printf("Insira um valor inteiro para A: \n");
        scanf(" %d", &a);
        printf("Insira um valor inteiro para B: \n");
        scanf(" %d", &b);
        
        if(a > b)
        {
            comeco = b + 1;
            fim = a - 1;
            for(i = comeco; i <= fim; i++)
            {
                if(i %2 == 0)
                {
                    somaTotal += pow(i, 3); 
                }
            }
        }
        
        else 
        {
            comeco = a + 1;
            fim = b - 1;
            for(i = comeco; i <= fim; i++)
            {
                if(i %2 == 0)
                {
                    somaTotal += pow(i, 3); 
                }
            }
        }
         printf("Intervalo vai de %d até %d\n", comeco, fim);
    printf("Valor da soma dos pares ao cubo: %d \n \n", somaTotal);
    somaTotal = 0;
    
    }
    
   
}
            

            


