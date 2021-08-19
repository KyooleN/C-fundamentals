/******************************************************************************

4. Faça um algoritmo que calcule e escreva a soma dos 20 primeiros números da série:

100/0! + 99/1! + 98/2! + 97/3! + ... + 1/99!

*******************************************************************************/
#include <stdio.h>

int main()
{
    float numerador, denominador, novoDenominador, resultado, i;
    resultado = 0;
    denominador = 0;
    novoDenominador = 1;
    i = 1;
    
   printf("100/0! = impossível \n");
    
    for(numerador = 99; numerador >= 81; numerador--)
    {   
         if(denominador <= 19)
        {
            denominador++;
        }
        while(i <= denominador)
        {
            novoDenominador*=i;
            i++;
        }
        
        printf(" %.2f +", resultado);
        resultado = resultado + numerador/novoDenominador;
        
        
        printf(" %.2f / %.2f! = %f\n", numerador, denominador, resultado);
    
        
    }
}



