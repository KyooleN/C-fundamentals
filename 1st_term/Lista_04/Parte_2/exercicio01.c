/******************************************************************************

1. Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, j, flag, num;
   
   
   flag = 0;
   printf("Insira um número inteiro para ser transformado em binário: \n");
   scanf(" %d", &num);
   
   for(i = 31; i>= 0; i--)
   {
       j = num >> i;
       
       if(j & 1)
       {
           printf("1");
           flag = 1;
       }
       else if(flag == 1)
       {
           printf("0");
       }
   }
}


