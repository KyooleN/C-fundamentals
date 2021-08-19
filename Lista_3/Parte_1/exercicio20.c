/******************************************************************************

. Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
TIPO DESCRIÇÃO RENDIMENTO MENSAL
1 Poupança 1,5%
2 Poupança plus 2%
3 Fundos de renda fixa 4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule 
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar 
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int codigo, tipoInvestimento;
   float valorInvest, rendimento, rendimentoTotal, valorTotal, novoTotal;
   
   codigo = 1;
   
   printf("Digite um valor menor que 1 para terminar a leitura.\n \n");
   
   while(codigo >= 1)
   {
       printf("Insira seu código: \n");
       scanf(" %d", &codigo);
       
       if(codigo > 0)
       {
           printf("Insira o tipo de investimento: \n");
           scanf(" %d", &tipoInvestimento);
           
           printf("Insira o valor a ser investido: \n");
           printf("R$");
           scanf(" %f", &valorInvest);
           
           if(tipoInvestimento == 1)
           {
               rendimento = valorInvest*1.5 - valorInvest;
           }
           else if(tipoInvestimento == 2)
           {
               rendimento = valorInvest*2 - valorInvest;
           }
           else if (tipoInvestimento == 3)
           {
               rendimento = valorInvest*4 - valorInvest;
           }
           
           valorTotal += valorInvest;
           rendimentoTotal += rendimento;
           novoTotal = valorTotal + rendimentoTotal;
       }
   } // fim do loop.
    printf("Total investido: R$%.2f\n", valorTotal);
    printf("Total de juros pagos: R$%.2f\n", rendimentoTotal);
    printf("Novo total: R$%.2f", novoTotal);
       
}
      
       
       
       
       
           
           

