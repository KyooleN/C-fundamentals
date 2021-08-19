/******************************************************************************

 Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre: 
■ a quantidade de pessoas com idade superior a 50 anos; 
■ a média das alturas das pessoas com idade entre 10 e 20 anos; 
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int idade, pessoas50, pessoas20, pessoa, peso40, i;
  float altura, peso, Alt20, mediaAlt20, porcentoPeso40;
  pessoas20 = 0;
  pessoas50 = 0;
  Alt20 = 0;
  i = 1;



  for (pessoa = 1; pessoa <= 5; pessoa++)
    {
      printf ("Insira a Idade da pessoa: (%dx)\n", i);
      scanf (" %d", &idade);

      printf ("Insira a altura da pessoa (em metros): (%dx)\n", i);
      scanf (" %f", &altura);

      printf ("Insira o peso da pessoa (em quilogramas):(%dx)\n", i);
      scanf (" %f", &peso);
      i++;

      if (idade >= 10 && idade <= 20)
	{
	  pessoas20++;
	  Alt20 += altura;
	}
      if (idade > 50)
	{
	  pessoas50++;
	}
	
	if(peso < 40)
	{
	    peso40++;
	}
    }
mediaAlt20 = Alt20/pessoas20;
porcentoPeso40 = (peso40/5) * 100;


    printf("\n");
    printf("Há %d pessoas com mais de 50 anos.\n", pessoas50);
    printf("A média das alturas das pessoas com idade entre 10 e 20 anos é de %.2fm\n", mediaAlt20);
    printf("%.2f porcento das pessoas tem peso inferior a 40kg.\n", porcentoPeso40);
}



