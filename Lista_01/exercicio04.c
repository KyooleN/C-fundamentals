/******************************************************************************

4- Faça um programa que receba quatro números inteiros, calcule e retorne a soma destes números

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,c,d,soma;
  printf("Escreva quatro (4) números inteiros:\n");
  scanf("%d %d %d %d", &a,&b,&c,&d);
  soma = a+b+c+d;
  printf("%d + %d + %d + %d = %d",a,b,c,d,soma);
}
