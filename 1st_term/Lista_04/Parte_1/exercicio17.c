/******************************************************************************

17. Faça um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor
fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo será
encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO

*******************************************************************************/
#include <stdio.h>

void main()
{
    int numero;
    numero = 1;
    
    
    while(numero > 0)
    {
        printf("Insira um número: \n");
        scanf(" %d", &numero);
        
        if(numero <= 0)
        {
            return;
        }
        
        else if(numero % 2 == 0)
        {
            printf("O número é par\n \n");
        }
            
        else
        {
            printf("O número é ímpar\n \n");
        }
    }  
}

