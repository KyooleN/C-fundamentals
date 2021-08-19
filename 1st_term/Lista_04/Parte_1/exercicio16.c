/******************************************************************************

16. Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura com teste
de saída no início da repetição (ENQUANTO).


*******************************************************************************/
#include <stdio.h>

void main()
{
    float numero;
    numero = 1;
   
    
    while(numero != 0)
    {
        printf("Insira um número: ");
        scanf(" %f", &numero);
        
        if(numero > 0)
        {
            printf("Número positivo \n");
        }
        else if (numero < 0)
        {
            printf("Número negativo \n");
        }
        
        
    }
   
    }
    
