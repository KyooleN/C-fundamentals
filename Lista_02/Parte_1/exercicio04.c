/******************************************************************************

Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
ESCOLHA DO USUÁRIO OPERAÇÃO
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  double num1, num2, media, dif, prod, divi;
  int OptUser;
  printf ("Digite dois números:\n");
  scanf ("%lf %lf", &num1, &num2);
  printf ("O que deseja fazer?\n");
  printf ("Digite:\n");
  printf ("1 - para obter a média;\n");
  printf ("2 - para obter a diferença entre o maior e o menor número;\n");
  printf ("3 - para obter o produto;\n");
  printf ("4 - para dividir o primeiro número pelo segundo.\n");

  scanf ("%d", &OptUser);

  if (OptUser == 1)  //Caso deseje a média

    {
      media = (num1 + num2) / 2; //Cálculo da média
      printf ("(%.2lf + %.2lf)/2 = %.2lf", num1, num2,
	      media);
    }


  else if (OptUser == 2 && num1 > num2) //Caso deseje a diferença.

    {
      dif = num1 - num2; //Cálculo da diferença caso num1 > num2.
      printf (" %.2lf - %.2lf = %.2lf", num1, num2,
	      dif);
    }
  else if (OptUser == 2 && num2 > num1) //Cálculo da diferença caso num2 > num1.
    {
      dif = num2 - num1;
      printf (" %.2lf - %.2lf = %.2lf", num2, num1,
	      dif);
    }

  else if (OptUser == 3) //Caso deseje o produto.
    {
      prod = num1 * num2; //Cálculo do produto.
      printf (" %.2lf x %.2lf = %.2lf.", num1, num2,
	      prod);
    }

  else if (OptUser == 4) //Caso deseje o quociente.
    {
      divi = num1 / num2; //Cálculo da divisão.
      printf (" %.2lf / %.2lf = %.2lf.", num1, num2,
	      divi);
    }
    
}
