/******************************************************************************

Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro 
e retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).

*******************************************************************************/
#include <stdio.h>

void somaN (int n)
{
    int i, resultado = 0;
    for(i = 0; i <= n; i++)
    {
        resultado += i;
    }
    printf("Somas do números inteiros entre 1 e %d = %d", n, resultado);
}

int main()
{
    int n;
    printf("Insira um número: ");
    scanf(" %d", &n);
    
    somaN(n);
}
   
    
    

