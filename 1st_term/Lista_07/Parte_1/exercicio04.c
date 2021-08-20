/******************************************************************************

4- Calcular a soma dos dígitos de um número (ex.: 75 = 7 + 5 = 12)

*******************************************************************************/
#include <stdio.h>

int Soma(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return num%10 + Soma(num/10);
    }
    
   
}

int main()
{
    int num, soma;
    
   printf("Insira um número inteiro: \n");
   scanf(" %d", &num);
   
   soma = Soma(num);
   printf("%d", soma);
}

