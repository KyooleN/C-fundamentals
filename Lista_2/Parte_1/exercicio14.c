/******************************************************************************

. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))
H (MINUTOS) PRÊMIO (R$)
> = 2.400 500,00
1.800 2.400 400,00
1.200 1.800 300,00
600 1.200 200,00
< 600 100,00
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  double hExtra, hFalta, H;

  printf ("Insira o número de horas extras trabalhadas:\n");
  scanf ("%lf", &hExtra);
  printf ("Insira o número de horas falta:\n");
  scanf ("%lf", &hFalta);

  H = 60 * (hExtra - (2 / 3 * (hFalta)));

  if (H < 600)
    {
      printf ("Seu prêmio é de R$100,00.");
    }
  else if (H >= 600 && H < 1200)
  {
    printf ("Seu prêmio é de R$200,00.");
  }

  
 else if (H >= 1200 && H < 1800)
  {
    printf ("Seu prêmio é de R300,00.");
  }
  else if (H >= 1800 && H < 2400)
  {
    printf ("Seu prêmio é de R$400,00.");
  }
  else if (H >= 2400)
  {
    printf ("Seu prêmio é de R$500,00.");
  }
  else
  {
    printf ("Erro; Insira um valor válido");
  }



}
