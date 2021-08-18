/******************************************************************************

. Faça um programa que receba:
■ o código do produto comprado; e
■ a quantidade comprada do produto.
Calcule e mostre:
■ o preço unitário do produto comprado, seguindo a Tabela I;
■ o preço total da nota;
■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■ o preço final da nota depois do desconto.
TABELA I
CÓDIGO PREÇO
1 a 10 R$ 10,00
11 a 20 R$ 15,00
21 a 30 R$ 20,00
31 a 40 R$ 30,00
TABELA II
PREÇO TOTAL DA NOTA % DE DESCONTO
Até R$ 250,00 5%
Entre R$ 250,00 e R$ 500,00 10%
Acima de R$ 500,00 15%
*******************************************************************************/
#include <stdio.h>

void
main ()
{
  double uniPrice, totalPrice, newPrice, desconto;
  int codigo, quantidade;

  printf ("Insira o código do produto: ");
  scanf ("%d", &codigo);
  if (codigo < 1 || codigo > 40) //Caso o código não seja válido, o programa encerra;
    {
      printf ("Erro; Insira um código válido.");
      return;

    }

  printf ("Insira a quantidade que deseja comprar: ");
  scanf ("%d", &quantidade);

  if (codigo >= 1 && codigo <= 10) //Delegando o preço das unidades de acordo com o código informado;
    {
      uniPrice = 10.00;


    }
  else if (codigo >= 11 && codigo <= 20)
    {
      uniPrice = 15.00;


    }
  else if (codigo >= 21 && codigo <= 30)
    {
      uniPrice = 20.00;


    }
  else if (codigo >= 31 && codigo <= 40)
    {
      uniPrice = 30.00;


    }
  totalPrice = uniPrice * quantidade;

  if (totalPrice <= 250.00) //Delegando o desconto de acordo com o preço total;
    {
      newPrice = totalPrice * 0.95;

    }
  else if (totalPrice > 250.00 && totalPrice <= 500.00)
    {
      newPrice = totalPrice * 0.9;

    }
  else
    {
      newPrice = totalPrice * 0.85;

    }
  desconto = totalPrice - newPrice;
  //Output
  printf ("Total sem desconto: R$%.2lf;\n", totalPrice);
  printf ("Desconto: R$%.2lf;\n", desconto);
  printf ("Novo preço: R$%.2lf", newPrice);






}
