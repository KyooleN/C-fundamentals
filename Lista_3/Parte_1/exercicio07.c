/******************************************************************************

Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos 
números primos.
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int num, somaPares, somaPrimos, qntdNum, i;
  i = 1;
  somaPrimos = 0;
  somaPares = 0;
  for (qntdNum = 1; qntdNum <= 10; qntdNum++)
    {
      printf ("Insira um número:  (%dx)\n", i);
      scanf (" %d", &num);
      printf("\n");
      i++;
      if (num % 2 == 0)
	{
	  somaPares += num;
	}
      if ( num == 2 || num == 3 || num != 1 &&  num % 2 != 0 && num % 3 != 0)
	{
	  somaPrimos += num;
	}


    }
  printf ("Soma dos números pares: %d \n", somaPares);
  printf ("Soma dos números primos: %d \n", somaPrimos);




}


