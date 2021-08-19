/******************************************************************************

9. Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores 
desse valor.
*******************************************************************************/
#include <stdio.h>

void Divisores(int num, int divisor, int somaDivisor)
{
    somaDivisor = 0;
    printf("Insira um número:\n");
    scanf(" %d", &num);
    
    for(divisor = 1; divisor <= num; divisor++)
    {
        if(num%divisor == 0)
        {
            somaDivisor+=divisor;
        }
    }
    
    printf("Soma dos divisores de %d = %d", num, somaDivisor);
}


    

int main()
{
    int num, divisor, somaDivisor;
    Divisores(num, divisor, somaDivisor);
}

