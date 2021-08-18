/******************************************************************************

Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
Calcule e mostre:
■ O valor do aumento, usando as regras que se seguem.
PREÇO CATEGORIA PERCENTUAL DE AUMENTO
< = 25
1 5%
2 8%
3 10%
> 25
1 12%
2 15%
3 18%
■ O valor do imposto, usando as regras a seguir.

O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
■ O novo preço, ou seja, o preço mais aumento menos imposto.
■ A classificação, usando as regras a seguir.
NOVO PREÇO CLASSIFICAÇÃO
< = R$ 50,00 Barato
Entre R$ 50,00 e R$ 120,00 Normal
*******************************************************************************/
#include <stdio.h>
void
main ()
{
  double preco, newPrice, finalPrice, aumento, imposto;
  int categoria;
  char situacao;
  printf ("Insira o preço do produto: R$");
  scanf ("%lf", &preco);
  if (preco < 0) //conferindo se o preço é válido
    {
      printf ("Erro; Insira um valor maior ou igual a '0'");
    
    }

  printf ("Informe a categoria do produto: \n");
  scanf (" %d", &categoria);
  if (categoria < 1 || categoria > 3) //conferindo se a categoria é válida
    {
      printf ("Erro; Insira um valor entre '1' e '3' ");
      return;
    }

  printf ("Informe a situação do produto: \n"); //conferindo se a situação é válida
  scanf (" %c", &situacao);
  if(situacao != 'n' && situacao != 'r' && situacao != 'N' && situacao != 'R')
  {
      printf("Erro; Insira uma situação válida.");
      return;
  }
  
    
  if (preco <= 25.00 && categoria == 1) //Cálculo do novo preço
    {
      newPrice = preco * 1.05;
    }
  else if (preco <= 25.00 && categoria == 2)
    {
      newPrice = preco * 1.08;
    }
  else if (preco <= 25.00 && categoria == 3)
    {
      newPrice = preco * 1.08;
    }
  else if (preco > 25.00 && categoria == 1)
    {
      newPrice = preco * 1.12;
    }
  else if (preco > 25.00 && categoria == 2)
    {
      newPrice = preco * 1.15;
    }
  else if (preco > 25.00 && categoria == 3)
    {
      newPrice = preco * 1.15;
    }  // Fim do cálculo do novo preço
  if (categoria == 2 || situacao == 'r' || situacao == 'R') // Cálculo da exceção
    {
      finalPrice = newPrice * 0.95;
    }
  else
    {
      finalPrice = newPrice * 0.92;
    } //Fim cálculo exceção
  imposto = finalPrice - newPrice;
  aumento = newPrice - preco;
  if (finalPrice <= 50.00) //output
    {
      printf ("Aumento: R$%.2lf;\t", aumento);
      printf ("Imposto: R$%.2lf;\t", imposto);
      printf ("Novo preço: R$%.2lf;\t", finalPrice);
      printf ("Classificação: Barato.\t");
    }
  else if (finalPrice > 50.00 && finalPrice < 120.00)
    {
      printf ("Aumento: R$%.2lf;\t", aumento);
      printf ("Imposto: R$%.2lf;\t", imposto);
      printf ("Novo preço: R$%.2lf;\t", finalPrice);
      printf ("Classificação: Normal.\t");
    }
  else
    {
      printf ("Aumento: R$%.2lf;\t", aumento);
      printf ("Imposto: R$%.2lf;\t", imposto);
     printf  ("Novo preço: R$%.2lf;\t", finalPrice);
      printf ("Classificação: Caro.\t");
    }






}


