/******************************************************************************

Faça um programa que receba a idade de oito pessoas, calcule e mostre: 
a) a quantidade de pessoas em cada faixa etária; 
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas. 
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
FAIXA ETÁRIA IDADE
1a Até 15 anos
2a De 16 a 30 anos
3a De 31 a 45 anos
4a De 46 a 60 anos
5a Acima de 60 anos

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int idade, pessoa;
  int idade15, idade30, idade45, idade60, idadeX;
  float porcento15, porcentoX;
  idade15 = 0;
  idade30 = 0;
  idade45 = 0;
  idade60 = 0; 
  idadeX = 0;


  for (pessoa = 1; pessoa <= 8; pessoa++)
    {
      printf ("Insira a idade da pessoa:\n");
      scanf (" %d", &idade);

      if (idade <= 15)
	{
	idade15++;}
      else if (idade > 15 && idade <= 30)
	{
	  idade30++;
	}
      else if (idade > 30 && idade <= 45)
	{
	  idade45++;
	}
      else if (idade > 45 && idade <= 60)
	{
	  idade60++;
	}
      else if (idade > 60)
	{
	  idadeX++;
	}

    }
    porcento15 = ((float)idade15/8) * 100;
    porcentoX = ((float)idadeX/8) * 100;

  printf ("Número de pessoas com idade:\n");
  printf ("Até 15 anos: %d\n", idade15);
  printf ("Entre 16 e 30 anos: %d\n", idade30);

  printf ("Entre 31 e 45 anos: %d\n", idade45);

  printf ("Entre 46 e 60 anos: %d\n", idade60);

  printf ("Acima de 60 anos: %d\n", idadeX);
  
  printf("Porcentagem de pessoas com idade:\n");

  printf("Até 15 anos: %.2f \t", porcento15);
  printf("Acima de 60 anos: %.2f", porcentoX);
}


