/******************************************************************************

Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e 
determine o valor da sequência S, descrita a seguir:
S = 1 + 1/2 + 1/3... 
Observação
A quantidade de parcelas que compõe S é igual a N.

*******************************************************************************/
#include <stdio.h>


void Sequencia(int num, int i, float soma)
{
    soma = 0;
    
    printf("Insira um número inteiro maior ou igual a 1: \n");
    scanf(" %d", &num);
    
    for(i = 1; i <= num; i++)
    {
        
        soma+= (1/(float)i);
        
    }
    printf("Valor da sequência = %.3f", soma);
}

int main()
{
   int num, i, soma;
   Sequencia(num, i, soma);
}

