/******************************************************************************

Faça um programa que mostre as tabuadas dos números de 1 a 10

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  float num, i, prod;
  num = 1;



  while (num < 11)
    {
      i = 0;
      while (i < 11)
	{
	  prod = num * i;
	  printf ("%.2f x %.2f = %.2f\n", num, i, prod);
	  i++;
	}


      num++;
      printf ("\n");
    }

}



