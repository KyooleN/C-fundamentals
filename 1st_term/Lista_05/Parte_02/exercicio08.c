/******************************************************************************

8.Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial. 

*******************************************************************************/
#include <stdio.h>

void Fatorial(int num, int i, int fatorial)
{
    fatorial = 1;
    printf("Insira um número: \n");
    scanf( "%d", &num);
    
    for(i = 1; i<= num; i++)
    {
        fatorial *=i;
    }
    printf("%d! = %d", num, fatorial);
}

int main()
{
    int num, i, fatorial;
     Fatorial(num, i,fatorial);
    
}

