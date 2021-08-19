/******************************************************************************

9. Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir os N
primeiros números inteiros.


*******************************************************************************/
#include <stdio.h>

void main()
{
   int i, n;
   
   printf("Insira um valor para N: \n");
   scanf(" %d", &n);
   
   if(n < 0)
   {
       printf("Erro; Insira um valor positivo para N");
       return;
   }
   
   for(i = 1; i <= n; i++)
   {
       printf(" %d \n", i);
   }
   
}

