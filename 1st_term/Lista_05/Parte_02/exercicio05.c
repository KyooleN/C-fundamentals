/******************************************************************************

5.Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo. 

*******************************************************************************/
#include <stdio.h>

void Valor(int num)
{
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    if(num < 0)
    {
        printf("Número negativo.");
    }
    else if(num == 0)
    {
        printf("Número neutro.");
    }
    else
    {
        printf("Número positivo.");
    }
        
    
}

int main()
{
    int num;
     Valor(num);
}

