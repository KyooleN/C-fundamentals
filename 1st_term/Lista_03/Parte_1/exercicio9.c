/******************************************************************************

 Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os 
números que foram digitados.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, numPrimos, i;
    numPrimos = 0;
    
    for(i = 1; i <= 10; i++)
    {
        printf("Insira um número inteiro: (%dx)\n", i);
        scanf("%d", &num);
        
        
        if(num % 2 != 0 && num % 3 != 0 || num == 2 || num == 3)
        {
            numPrimos++;
        }
    }
    printf("Dos números digitados, %d são primos.", numPrimos);
}

